#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "plane.h"
#include "baloon.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    plane *ucak;
    baloon *balon;
    int konumX , konumY;
    QVector<baloon*> balonlar;
    void bolonPatlatma();

private slots:
    void on_pushYukari_clicked();

    void on_pushAsagi_clicked();

    void on_pushSol_clicked();

    void on_pushSag_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
