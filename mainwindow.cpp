#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tremA = new Trem(1, 600, 40);
    tremB = new Trem(2, 370, 140);
    tremC = new Trem(3, 570, 140);
    tremD = new Trem(4, 290, 240);
    tremE = new Trem(5, 470, 240);
    tremF = new Trem(6, 640, 240);

    connect(tremA, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));
    connect(tremB, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));
    connect(tremC, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));
    connect(tremD, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));
    connect(tremE, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));
    connect(tremF, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));

    ui->slider_a->setRange(0, 200);
    ui->slider_b->setRange(0, 200);
    ui->slider_c->setRange(0, 200);
    ui->slider_d->setRange(0, 200);
    ui->slider_e->setRange(0, 200);
    ui->slider_f->setRange(0, 200);
    ui->slider_master->setRange(0, 200);

    ui->slider_a->setValue(100);
    ui->slider_b->setValue(100);
    ui->slider_c->setValue(100);
    ui->slider_d->setValue(100);
    ui->slider_e->setValue(100);
    ui->slider_f->setValue(100);
    ui->slider_master->setValue(100);

    tremA->start();
    tremB->start();
    tremC->start();
    tremD->start();
    tremE->start();
    tremF->start();
}

MainWindow::~MainWindow()
{
    tremA->parar(); tremA->wait();
    tremB->parar(); tremB->wait();
    tremC->parar(); tremC->wait();
    tremD->parar(); tremD->wait();
    tremE->parar(); tremE->wait();
    tremF->parar(); tremF->wait();

    delete tremA;
    delete tremB;
    delete tremC;
    delete tremD;
    delete tremE;
    delete tremF;

    delete ui;
}

void MainWindow::updateInterface(int id, int x, int y)
{
    switch(id){
    case 1: ui->label_tremA->setGeometry(x, y, 21, 17); break;
    case 2: ui->label_tremB->setGeometry(x, y, 21, 17); break;
    case 3: ui->label_tremC->setGeometry(x, y, 21, 17); break;
    case 4: ui->label_tremD->setGeometry(x, y, 21, 17); break;
    case 5: ui->label_tremE->setGeometry(x, y, 21, 17); break;
    case 6: ui->label_tremF->setGeometry(x, y, 21, 17); break;
    default: break;
    }
}

void MainWindow::on_slider_master_valueChanged(int value)
{
    ui->slider_a->setValue(value);
    ui->slider_b->setValue(value);
    ui->slider_c->setValue(value);
    ui->slider_d->setValue(value);
    ui->slider_e->setValue(value);
    ui->slider_f->setValue(value);

    tremA->setVelocidade(value);
    tremB->setVelocidade(value);
    tremC->setVelocidade(value);
    tremD->setVelocidade(value);
    tremE->setVelocidade(value);
    tremF->setVelocidade(value);
}

void MainWindow::on_slider_a_valueChanged(int value) { tremA->setVelocidade(value); }
void MainWindow::on_slider_b_valueChanged(int value) { tremB->setVelocidade(value); }
void MainWindow::on_slider_c_valueChanged(int value) { tremC->setVelocidade(value); }
void MainWindow::on_slider_d_valueChanged(int value) { tremD->setVelocidade(value); }
void MainWindow::on_slider_e_valueChanged(int value) { tremE->setVelocidade(value); }
void MainWindow::on_slider_f_valueChanged(int value) { tremF->setVelocidade(value); }