/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushSol;
    QPushButton *pushSag;
    QPushButton *pushYukari;
    QPushButton *pushAsagi;
    QSlider *horizontalSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushSol = new QPushButton(centralwidget);
        pushSol->setObjectName("pushSol");
        pushSol->setGeometry(QRect(30, 50, 90, 29));
        pushSag = new QPushButton(centralwidget);
        pushSag->setObjectName("pushSag");
        pushSag->setGeometry(QRect(230, 50, 90, 29));
        pushYukari = new QPushButton(centralwidget);
        pushYukari->setObjectName("pushYukari");
        pushYukari->setGeometry(QRect(130, 10, 90, 29));
        pushAsagi = new QPushButton(centralwidget);
        pushAsagi->setObjectName("pushAsagi");
        pushAsagi->setGeometry(QRect(130, 50, 90, 29));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(540, 40, 160, 18));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushSol->setText(QCoreApplication::translate("MainWindow", "SOL", nullptr));
        pushSag->setText(QCoreApplication::translate("MainWindow", "SA\304\236", nullptr));
        pushYukari->setText(QCoreApplication::translate("MainWindow", "YUKARI", nullptr));
        pushAsagi->setText(QCoreApplication::translate("MainWindow", "A\305\236A\304\236I", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
