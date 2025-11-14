#include "baloon.h"

baloon::baloon(QWidget *parent)
    : QLabel{parent}
{
    setPixmap(QPixmap::fromImage(QImage(":/img/image/balon.jpeg")));
    setScaledContents(true);
    setFrameShape(QFrame::Box);
    show();
}
