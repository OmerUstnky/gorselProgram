#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     x=50;
    for(int i=0;i<5;i++){
        prk=new park(this);
        prk->setGeometry(x,250,100,100);
        prk->setPixmap(QPixmap::fromImage(QImage(":/res/images/parking.png")));
        prk->setScaledContents(true);
        prk->setFrameShape(QFrame::Box);
        prk->show();
        x=x+100;
    }

    oto =new car(this,this);
    oto->setGeometry(100,100,100,70);
    oto->setPixmap(QPixmap::fromImage(QImage(":/res/images/carYatay.png")));
    oto->setScaledContents(true);
    oto->show();

    ilkSizeX=oto->width();
    ilkSizeY=oto->height();

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_solButton_clicked()
{
    oto->resize(ilkSizeX,ilkSizeY);
    oto->setPixmap(QPixmap::fromImage(QImage(":/res/images/carYatay.png")));
    oto->setScaledContents(true);
    oto->move(oto->x()-ui->horizontalSlider->value(),oto->y());
}


void MainWindow::on_sagButton_clicked()
{
     oto->resize(ilkSizeX,ilkSizeY);
     oto->setPixmap(QPixmap::fromImage(QImage(":/res/images/carYatay.png")));
     oto->setScaledContents(true);
     oto->move(oto->x()+ui->horizontalSlider->value(),oto->y());
}



void MainWindow::on_asagiButton_clicked()
{
    oto->resize(ilkSizeY,ilkSizeX);
    oto->setPixmap(QPixmap::fromImage(QImage(":/res/images/carDik.png")));
    oto->setScaledContents(true);
    oto->move(oto->x(),oto->y()+ui->horizontalSlider->value());
}



void MainWindow::on_yukariButton_clicked()
{
    oto->resize(ilkSizeY,ilkSizeX);
    oto->setPixmap(QPixmap::fromImage(QImage(":/res/images/carDik.png")));
    oto->setScaledContents(true);
    oto->move(oto->x(),oto->y()-ui->horizontalSlider->value());
}

