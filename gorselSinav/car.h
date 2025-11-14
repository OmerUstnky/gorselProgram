#ifndef CAR_H
#define CAR_H

#include <QWidget>
#include <QLabel>

class MainWindow;
class car : public QLabel
{
    Q_OBJECT
public:
    explicit car(MainWindow *mw,QWidget *parent = nullptr);
    MainWindow *mainWindow;


signals:

};

#endif // CAR_H
