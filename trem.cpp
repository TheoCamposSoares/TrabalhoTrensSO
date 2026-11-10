#include "trem.h"

#include <QMutexLocker>
#include <QRectF>
#include <QtGlobal>
#include <algorithm>

static QMutex mutexRegioes[9];

static QMutex mutexEstado;
static QPoint posicoes[6];
static bool registrados[6] = {
    false, false, false, false, false, false
};

static const QRectF regioes[9] = {
    QRectF(350, 140, 120, 17), // 0 (Região 1) - A/B
    QRectF(470, 140, 130, 17), // 1 (Região 2) - A/C
    QRectF(470, 140, 21, 100), // 2 (Região 3) - B/C
    QRectF(210, 240, 160, 17), // 3 (Região 4) - B/D
    QRectF(370, 240, 100, 17), // 4 (Região 5) - B/E
    QRectF(470, 240, 100, 17), // 5 (Região 6) - C/E
    QRectF(570, 240, 150, 17), // 6 (Região 7) - C/F
    QRectF(370, 240, 21, 100), // 7 (Região 8) - D/E
    QRectF(570, 240, 21, 100)  // 8 (Região 9) - E/F
};

Trem::Trem(int ID, int x, int y)
{
    this->ID = ID;
    this->x = x;
    this->y = y;
    this->velocidade = 100;
    this->executando = (ID >= 1 && ID <= 6);

    if (!executando)
        return;

    const int indice = ID - 1;

    {
        QMutexLocker locker(&mutexEstado);
        posicoes[indice] = QPoint(x, y);
        registrados[indice] = true;
    }

    QRectF posAtual(x, y, 21, 17);
    for (int i = 0; i < 9; ++i) {
        if (posAtual.intersects(regioes[i])) {
            mutexRegioes[i].lock();
            regioesOcupadas.append(i);
        }
    }
}

void Trem::setVelocidade(int vel)
{
    QMutexLocker locker(&mutexVelocidade);
    velocidade = qBound(0, vel, 200);
}

void Trem::parar()
{
    QMutexLocker locker(&mutexVelocidade);
    executando = false;
}

QPoint Trem::calcularProximaPosicao() const
{
    int novoX = x;
    int novoY = y;

    switch (ID) {
    case 1:
        if (y == 40 && x > 350) novoX -= 10;
        else if (x == 350 && y < 140) novoY += 10;
        else if (y == 140 && x < 600) novoX += 10;
        else if (x == 600 && y > 40) novoY -= 10;
        break;

    case 2:
        if (y == 140 && x > 210) novoX -= 10;
        else if (x == 210 && y < 240) novoY += 10;
        else if (y == 240 && x < 470) novoX += 10;
        else if (x == 470 && y > 140) novoY -= 10;
        break;

    case 3:
        if (y == 140 && x > 470) novoX -= 10;
        else if (x == 470 && y < 240) novoY += 10;
        else if (y == 240 && x < 720) novoX += 10;
        else if (x == 720 && y > 140) novoY -= 10;
        break;

    case 4:
        if (y == 240 && x > 210) novoX -= 10;
        else if (x == 210 && y < 340) novoY += 10;
        else if (y == 340 && x < 370) novoX += 10;
        else if (x == 370 && y > 240) novoY -= 10;
        break;

    case 5:
        if (y == 240 && x > 370) novoX -= 10;
        else if (x == 370 && y < 340) novoY += 10;
        else if (y == 340 && x < 570) novoX += 10;
        else if (x == 570 && y > 240) novoY -= 10;
        break;

    case 6:
        if (y == 240 && x > 570) novoX -= 10;
        else if (x == 570 && y < 340) novoY += 10;
        else if (y == 340 && x < 720) novoX += 10;
        else if (x == 720 && y > 240) novoY -= 10;
        break;
    }

    return QPoint(novoX, novoY);
}

void Trem::run()
{
    if (ID < 1 || ID > 6)
        return;

    const int indice = ID - 1;

    while (true) {
        int velocidadeAtual;

        {
            QMutexLocker locker(&mutexVelocidade);
            if (!executando)
                break;
            velocidadeAtual = velocidade;
        }

        if (velocidadeAtual == 0) {
            msleep(50);
            continue;
        }

        QPoint proxima = calcularProximaPosicao();
        QRectF proximaRet(proxima.x(), proxima.y(), 21, 17);

        QList<int> regioesFuturas;
        for (int i = 0; i < 9; ++i) {
            if (proximaRet.intersects(regioes[i])) {
                regioesFuturas.append(i);
            }
        }

        QList<int> paraAdquirir;
        for (int r : regioesFuturas) {
            if (!regioesOcupadas.contains(r)) {
                paraAdquirir.append(r);
            }
        }

        QList<int> paraLiberar;
        for (int r : regioesOcupadas) {
            if (!regioesFuturas.contains(r)) {
                paraLiberar.append(r);
            }
        }

        std::sort(paraAdquirir.begin(), paraAdquirir.end());

        for (int r : paraAdquirir) {
            mutexRegioes[r].lock();
        }

        {
            QMutexLocker locker(&mutexEstado);
            x = proxima.x();
            y = proxima.y();
            posicoes[indice] = QPoint(x, y);
        }

        for (int r : paraLiberar) {
            mutexRegioes[r].unlock();
        }

        regioesOcupadas = regioesFuturas;

        emit updateGUI(ID, x, y);

        int tempoEspera = 200 - velocidadeAtual;
        if (tempoEspera < 2)
            tempoEspera = 2;

        msleep(tempoEspera);
    }
}