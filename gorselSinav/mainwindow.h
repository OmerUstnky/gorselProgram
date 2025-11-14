#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <car.h>
#include <park.h>
#include <QMouseEvent>
#include <QMoveEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    car *oto;
     park *prk;
    int x;
    int ilkSizeX;
    int ilkSizeY;


private slots:
    void on_solButton_clicked();

    void on_sagButton_clicked();

    void on_asagiButton_clicked();

    void on_yukariButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
