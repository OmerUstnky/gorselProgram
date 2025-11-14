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
    QPushButton *pushYukari;
    QPushButton *pushSol;
    QPushButton *pushAsagi;
    QPushButton *pushSag;
    QSlider *verticalSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushYukari = new QPushButton(centralwidget);
        pushYukari->setObjectName("pushYukari");
        pushYukari->setGeometry(QRect(550, 460, 90, 29));
        pushSol = new QPushButton(centralwidget);
        pushSol->setObjectName("pushSol");
        pushSol->setGeometry(QRect(460, 490, 90, 29));
        pushAsagi = new QPushButton(centralwidget);
        pushAsagi->setObjectName("pushAsagi");
        pushAsagi->setGeometry(QRect(550, 490, 90, 29));
        pushSag = new QPushButton(centralwidget);
        pushSag->setObjectName("pushSag");
        pushSag->setGeometry(QRect(640, 490, 90, 29));
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setGeometry(QRect(760, 360, 18, 160));
        verticalSlider->setOrientation(Qt::Orientation::Vertical);
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
        pushYukari->setText(QCoreApplication::translate("MainWindow", "Yukar\304\261", nullptr));
        pushSol->setText(QCoreApplication::translate("MainWindow", "Sol", nullptr));
        pushAsagi->setText(QCoreApplication::translate("MainWindow", "Asagi", nullptr));
        pushSag->setText(QCoreApplication::translate("MainWindow", "Sag", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
