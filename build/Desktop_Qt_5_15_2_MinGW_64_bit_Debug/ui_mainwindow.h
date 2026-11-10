/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lbl_a;
    QSlider *slider_a;
    QLabel *lbl_b;
    QSlider *slider_b;
    QLabel *lbl_c;
    QSlider *slider_c;
    QLabel *lbl_d;
    QSlider *slider_d;
    QLabel *lbl_e;
    QSlider *slider_e;
    QLabel *lbl_f;
    QSlider *slider_f;
    QLabel *lbl_m;
    QSlider *slider_master;
    QLabel *trilho_sup;
    QLabel *trilho_med1;
    QLabel *trilho_esq1;
    QLabel *trilho_dir1;
    QLabel *trilho_inf_med;
    QLabel *trilho_esq2;
    QLabel *trilho_div2;
    QLabel *trilho_dir2;
    QLabel *trilho_base;
    QLabel *trilho_esq3;
    QLabel *trilho_div3_1;
    QLabel *trilho_div3_2;
    QLabel *trilho_dir3;
    QLabel *label_tremA;
    QLabel *label_tremB;
    QLabel *label_tremC;
    QLabel *label_tremD;
    QLabel *label_tremE;
    QLabel *label_tremF;
    QLabel *trilho_med1_2;
    QLabel *trilho_med1_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(880, 520);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lbl_a = new QLabel(centralWidget);
        lbl_a->setObjectName(QString::fromUtf8("lbl_a"));
        lbl_a->setGeometry(QRect(20, 30, 60, 20));
        slider_a = new QSlider(centralWidget);
        slider_a->setObjectName(QString::fromUtf8("slider_a"));
        slider_a->setGeometry(QRect(80, 30, 130, 20));
        slider_a->setOrientation(Qt::Horizontal);
        lbl_b = new QLabel(centralWidget);
        lbl_b->setObjectName(QString::fromUtf8("lbl_b"));
        lbl_b->setGeometry(QRect(20, 70, 60, 20));
        slider_b = new QSlider(centralWidget);
        slider_b->setObjectName(QString::fromUtf8("slider_b"));
        slider_b->setGeometry(QRect(80, 70, 130, 20));
        slider_b->setOrientation(Qt::Horizontal);
        lbl_c = new QLabel(centralWidget);
        lbl_c->setObjectName(QString::fromUtf8("lbl_c"));
        lbl_c->setGeometry(QRect(20, 110, 60, 20));
        slider_c = new QSlider(centralWidget);
        slider_c->setObjectName(QString::fromUtf8("slider_c"));
        slider_c->setGeometry(QRect(80, 110, 130, 20));
        slider_c->setOrientation(Qt::Horizontal);
        lbl_d = new QLabel(centralWidget);
        lbl_d->setObjectName(QString::fromUtf8("lbl_d"));
        lbl_d->setGeometry(QRect(20, 150, 60, 20));
        slider_d = new QSlider(centralWidget);
        slider_d->setObjectName(QString::fromUtf8("slider_d"));
        slider_d->setGeometry(QRect(80, 150, 130, 20));
        slider_d->setOrientation(Qt::Horizontal);
        lbl_e = new QLabel(centralWidget);
        lbl_e->setObjectName(QString::fromUtf8("lbl_e"));
        lbl_e->setGeometry(QRect(20, 190, 60, 20));
        slider_e = new QSlider(centralWidget);
        slider_e->setObjectName(QString::fromUtf8("slider_e"));
        slider_e->setGeometry(QRect(80, 190, 130, 20));
        slider_e->setOrientation(Qt::Horizontal);
        lbl_f = new QLabel(centralWidget);
        lbl_f->setObjectName(QString::fromUtf8("lbl_f"));
        lbl_f->setGeometry(QRect(20, 230, 60, 20));
        slider_f = new QSlider(centralWidget);
        slider_f->setObjectName(QString::fromUtf8("slider_f"));
        slider_f->setGeometry(QRect(80, 230, 130, 20));
        slider_f->setOrientation(Qt::Horizontal);
        lbl_m = new QLabel(centralWidget);
        lbl_m->setObjectName(QString::fromUtf8("lbl_m"));
        lbl_m->setGeometry(QRect(20, 290, 60, 20));
        slider_master = new QSlider(centralWidget);
        slider_master->setObjectName(QString::fromUtf8("slider_master"));
        slider_master->setGeometry(QRect(80, 290, 130, 20));
        slider_master->setOrientation(Qt::Horizontal);
        trilho_sup = new QLabel(centralWidget);
        trilho_sup->setObjectName(QString::fromUtf8("trilho_sup"));
        trilho_sup->setGeometry(QRect(350, 40, 260, 17));
        trilho_sup->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_med1 = new QLabel(centralWidget);
        trilho_med1->setObjectName(QString::fromUtf8("trilho_med1"));
        trilho_med1->setGeometry(QRect(350, 140, 260, 17));
        trilho_med1->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_esq1 = new QLabel(centralWidget);
        trilho_esq1->setObjectName(QString::fromUtf8("trilho_esq1"));
        trilho_esq1->setGeometry(QRect(350, 40, 21, 117));
        trilho_esq1->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_dir1 = new QLabel(centralWidget);
        trilho_dir1->setObjectName(QString::fromUtf8("trilho_dir1"));
        trilho_dir1->setGeometry(QRect(600, 40, 21, 117));
        trilho_dir1->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_inf_med = new QLabel(centralWidget);
        trilho_inf_med->setObjectName(QString::fromUtf8("trilho_inf_med"));
        trilho_inf_med->setGeometry(QRect(230, 240, 500, 17));
        trilho_inf_med->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_esq2 = new QLabel(centralWidget);
        trilho_esq2->setObjectName(QString::fromUtf8("trilho_esq2"));
        trilho_esq2->setGeometry(QRect(210, 140, 21, 117));
        trilho_esq2->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_div2 = new QLabel(centralWidget);
        trilho_div2->setObjectName(QString::fromUtf8("trilho_div2"));
        trilho_div2->setGeometry(QRect(470, 140, 21, 117));
        trilho_div2->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_dir2 = new QLabel(centralWidget);
        trilho_dir2->setObjectName(QString::fromUtf8("trilho_dir2"));
        trilho_dir2->setGeometry(QRect(720, 140, 21, 117));
        trilho_dir2->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_base = new QLabel(centralWidget);
        trilho_base->setObjectName(QString::fromUtf8("trilho_base"));
        trilho_base->setGeometry(QRect(230, 340, 500, 17));
        trilho_base->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_esq3 = new QLabel(centralWidget);
        trilho_esq3->setObjectName(QString::fromUtf8("trilho_esq3"));
        trilho_esq3->setGeometry(QRect(210, 240, 21, 117));
        trilho_esq3->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_div3_1 = new QLabel(centralWidget);
        trilho_div3_1->setObjectName(QString::fromUtf8("trilho_div3_1"));
        trilho_div3_1->setGeometry(QRect(370, 240, 21, 117));
        trilho_div3_1->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_div3_2 = new QLabel(centralWidget);
        trilho_div3_2->setObjectName(QString::fromUtf8("trilho_div3_2"));
        trilho_div3_2->setGeometry(QRect(570, 240, 21, 117));
        trilho_div3_2->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_dir3 = new QLabel(centralWidget);
        trilho_dir3->setObjectName(QString::fromUtf8("trilho_dir3"));
        trilho_dir3->setGeometry(QRect(720, 240, 21, 117));
        trilho_dir3->setStyleSheet(QString::fromUtf8("background: yellow;"));
        label_tremA = new QLabel(centralWidget);
        label_tremA->setObjectName(QString::fromUtf8("label_tremA"));
        label_tremA->setGeometry(QRect(350, 40, 21, 17));
        label_tremA->setStyleSheet(QString::fromUtf8("background: red; color: white; font-weight: bold;"));
        label_tremA->setAlignment(Qt::AlignCenter);
        label_tremB = new QLabel(centralWidget);
        label_tremB->setObjectName(QString::fromUtf8("label_tremB"));
        label_tremB->setGeometry(QRect(210, 140, 21, 17));
        label_tremB->setStyleSheet(QString::fromUtf8("background: red; color: white; font-weight: bold;"));
        label_tremB->setAlignment(Qt::AlignCenter);
        label_tremC = new QLabel(centralWidget);
        label_tremC->setObjectName(QString::fromUtf8("label_tremC"));
        label_tremC->setGeometry(QRect(470, 140, 21, 17));
        label_tremC->setStyleSheet(QString::fromUtf8("background: red; color: white; font-weight: bold;"));
        label_tremC->setAlignment(Qt::AlignCenter);
        label_tremD = new QLabel(centralWidget);
        label_tremD->setObjectName(QString::fromUtf8("label_tremD"));
        label_tremD->setGeometry(QRect(210, 240, 21, 17));
        label_tremD->setStyleSheet(QString::fromUtf8("background: red; color: white; font-weight: bold;"));
        label_tremD->setAlignment(Qt::AlignCenter);
        label_tremE = new QLabel(centralWidget);
        label_tremE->setObjectName(QString::fromUtf8("label_tremE"));
        label_tremE->setGeometry(QRect(370, 240, 21, 17));
        label_tremE->setStyleSheet(QString::fromUtf8("background: red; color: white; font-weight: bold;"));
        label_tremE->setAlignment(Qt::AlignCenter);
        label_tremF = new QLabel(centralWidget);
        label_tremF->setObjectName(QString::fromUtf8("label_tremF"));
        label_tremF->setGeometry(QRect(570, 240, 21, 17));
        label_tremF->setStyleSheet(QString::fromUtf8("background: red; color: white; font-weight: bold;"));
        label_tremF->setAlignment(Qt::AlignCenter);
        trilho_med1_2 = new QLabel(centralWidget);
        trilho_med1_2->setObjectName(QString::fromUtf8("trilho_med1_2"));
        trilho_med1_2->setGeometry(QRect(210, 140, 260, 17));
        trilho_med1_2->setStyleSheet(QString::fromUtf8("background: yellow;"));
        trilho_med1_3 = new QLabel(centralWidget);
        trilho_med1_3->setObjectName(QString::fromUtf8("trilho_med1_3"));
        trilho_med1_3->setGeometry(QRect(480, 140, 260, 17));
        trilho_med1_3->setStyleSheet(QString::fromUtf8("background: yellow;"));
        MainWindow->setCentralWidget(centralWidget);
        trilho_med1_3->raise();
        trilho_med1_2->raise();
        lbl_a->raise();
        slider_a->raise();
        lbl_b->raise();
        slider_b->raise();
        lbl_c->raise();
        slider_c->raise();
        lbl_d->raise();
        slider_d->raise();
        lbl_e->raise();
        slider_e->raise();
        lbl_f->raise();
        slider_f->raise();
        lbl_m->raise();
        slider_master->raise();
        trilho_sup->raise();
        trilho_med1->raise();
        trilho_esq1->raise();
        trilho_dir1->raise();
        trilho_inf_med->raise();
        trilho_esq2->raise();
        trilho_div2->raise();
        trilho_dir2->raise();
        trilho_base->raise();
        trilho_esq3->raise();
        trilho_div3_1->raise();
        trilho_div3_2->raise();
        trilho_dir3->raise();
        label_tremA->raise();
        label_tremB->raise();
        label_tremC->raise();
        label_tremD->raise();
        label_tremE->raise();
        label_tremF->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 880, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Projeto dos Trens - Sistemas Operacionais", nullptr));
        lbl_a->setText(QCoreApplication::translate("MainWindow", "Trem A:", nullptr));
        lbl_b->setText(QCoreApplication::translate("MainWindow", "Trem B:", nullptr));
        lbl_c->setText(QCoreApplication::translate("MainWindow", "Trem C:", nullptr));
        lbl_d->setText(QCoreApplication::translate("MainWindow", "Trem D:", nullptr));
        lbl_e->setText(QCoreApplication::translate("MainWindow", "Trem E:", nullptr));
        lbl_f->setText(QCoreApplication::translate("MainWindow", "Trem F:", nullptr));
        lbl_m->setText(QCoreApplication::translate("MainWindow", "Mestre:", nullptr));
        trilho_sup->setText(QString());
        trilho_med1->setText(QString());
        trilho_esq1->setText(QString());
        trilho_dir1->setText(QString());
        trilho_inf_med->setText(QString());
        trilho_esq2->setText(QString());
        trilho_div2->setText(QString());
        trilho_dir2->setText(QString());
        trilho_base->setText(QString());
        trilho_esq3->setText(QString());
        trilho_div3_1->setText(QString());
        trilho_div3_2->setText(QString());
        trilho_dir3->setText(QString());
        label_tremA->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_tremB->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_tremC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_tremD->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        label_tremE->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        label_tremF->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        trilho_med1_2->setText(QString());
        trilho_med1_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
