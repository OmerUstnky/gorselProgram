#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "QRandomGenerator"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    toop = new top(this);
    toop->setGeometry(100,100,70,70);

    k = QRandomGenerator::global()->bounded(10)+4;

    for (int var = 0; var < k; ++var) {
        a = QRandomGenerator::global()->bounded(750);
        b = QRandomGenerator::global()->bounded(550);
        engel = new block(this);
        engel->setGeometry(a,b,50,50);
        engel->setPixmap(QPixmap::fromImage(QImage(":/res/image/block.jpeg")));
        engel->setScaledContents(true);
        engel->show();
        engeller.append(engel);
    }

    connect(toop, &top::moved, this, &MainWindow::engelleCarpaniYokEtme); // yok etmede kullanıyorum.
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::engelleCarpaniYokEtme()
{
    for (int var = 0; var < k; ++var) {
        if (toop->geometry().intersects(engeller[var]->geometry())) {
            engeller[var]->hide();
        }
    }
}


// opsiyonel sıfırlama işlemi
/*
void MainWindow::on_pusReset_clicked() // yeniden başlatma
{
    // 1) Eski topu yok et
    if (toop) {
        delete toop;
        toop = nullptr;
    }

    // 2) Eski engelleri yok et
    for (auto e : engeller) {
        delete e;
    }
    engeller.clear();


    // 3) Yeni top oluştur
    toop = new top(this);
    toop->setGeometry(100,100,70,70);
    toop->show();


    // 4) Yeni engeller oluştur
    k = QRandomGenerator::global()->bounded(10) + 4;

    for (int var = 0; var < k; ++var)
    {
        int a = QRandomGenerator::global()->bounded(750);
        int b = QRandomGenerator::global()->bounded(550);

        block *engel = new block(this);
        engel->setGeometry(a, b, 50, 50);
        engel->setPixmap(QPixmap(":/res/image/block.jpeg"));
        engel->setScaledContents(true);
        engel->show();

        engeller.append(engel);
    }

    // 5) çarpışma kontrol sinyali tekrar bağlanmalı
    connect(toop, &top::moved, this, &MainWindow::engelleCarpaniYokEtme);
}
*/

