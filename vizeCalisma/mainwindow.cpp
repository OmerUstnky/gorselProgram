#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int y = 100;

    for (int i = 0; i < 5; ++i) {
        baloon *b = new baloon(this);
        b->setGeometry(y, 50, 80, 100);
        y += 100;
        b->show();
        balonlar.append(b);
    }

    ucak = new plane(this);
    ucak->setPixmap(QPixmap::fromImage(QImage(":/img/image/ucakYatay.png")));

    konumX = ucak->x();
    konumY = ucak->y();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::bolonPatlatma()
{
    for (int i = 0; i < balonlar.size(); ++i) {
        if (ucak->geometry().intersects(balonlar[i]->geometry())) { //intersects eğer iki dikdörtgen kesişiyorsa true, kesişmiyorsa false.
            balonlar[i]->hide();
        }
    }
}


void MainWindow::on_pushYukari_clicked()
{
    ucak->setPixmap(QPixmap::fromImage(QImage(":/img/image/ucakDik.jpeg")));
    ucak->setGeometry(konumX, ucak->y() - ui->verticalSlider->value() ,80, 120);
    konumY = ucak->y() - ui->verticalSlider->value();
    bolonPatlatma();
}


void MainWindow::on_pushAsagi_clicked()
{
    ucak->setPixmap(QPixmap::fromImage(QImage(":/img/image/ucakDik.jpeg")));
    ucak->setGeometry(konumX, ucak->y() + ui->verticalSlider->value() ,80, 120);
    konumY = ucak->y() + ui->verticalSlider->value();
    bolonPatlatma();
}


void MainWindow::on_pushSol_clicked()
{
    ucak->setPixmap(QPixmap::fromImage(QImage(":/img/image/ucakYatay.png")));
    ucak->setGeometry( ucak->x() - ui->verticalSlider->value(), konumY ,120, 80);
    konumX = ucak->x() - ui->verticalSlider->value();
    bolonPatlatma();
}


void MainWindow::on_pushSag_clicked()
{
    ucak->setPixmap(QPixmap::fromImage(QImage(":/img/image/ucakYatay.png")));
    ucak->setGeometry( ucak->x() + ui->verticalSlider->value(), konumY ,120, 80);
    konumX = ucak->x() + ui->verticalSlider->value();

    bolonPatlatma();
}




