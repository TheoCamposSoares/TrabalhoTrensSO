#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "trem.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void updateInterface(int id, int x, int y);

private slots:
    void on_slider_master_valueChanged(int value);
    void on_slider_a_valueChanged(int value);
    void on_slider_b_valueChanged(int value);
    void on_slider_c_valueChanged(int value);
    void on_slider_d_valueChanged(int value);
    void on_slider_e_valueChanged(int value);
    void on_slider_f_valueChanged(int value);

private:
    Ui::MainWindow *ui;


    Trem *tremA;
    Trem *tremB;
    Trem *tremC;
    Trem *tremD;
    Trem *tremE;
    Trem *tremF;
};

#endif // MAINWINDOW_H