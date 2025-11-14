#include "plane.h"

plane::plane(QWidget *parent)
    : QLabel{parent}
{
    setGeometry(50, 400 ,120, 80);
    setScaledContents(true);
    setFrameShape(QFrame::Box);
    show();
}
