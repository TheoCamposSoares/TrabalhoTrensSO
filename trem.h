#ifndef TREM_H
#define TREM_H

#include <QThread>
#include <QMutex>
#include <QPoint>
#include <QList>

class Trem : public QThread
{
    Q_OBJECT

public:
    Trem(int ID, int x, int y);

    void run() override;
    void setVelocidade(int vel);
    void parar();

signals:
    void updateGUI(int id, int x, int y);

private:
    int ID;
    int x;
    int y;
    int velocidade;
    bool executando;

    QMutex mutexVelocidade;
    QList<int> regioesOcupadas;

    QPoint calcularProximaPosicao() const;
};

#endif // TREM_H