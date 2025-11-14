#include "top.h"
#include <QMainWindow>

top::top(QWidget *parent)
    : QLabel{parent}
{
    setPixmap(QPixmap(":/res/image/ball.png"));
    setScaledContents(true);
    show();
}

void top::mousePressEvent(QMouseEvent *ev)
{
    ilkKonum = ev->pos();
}

void top::mouseMoveEvent(QMouseEvent *ev)
{
    int yeniX = ev->globalPosition().x() - parentWidget()->mapToGlobal(pos()).x() - ilkKonum.x() + x();
    int yeniY = ev->globalPosition().y() - parentWidget()->mapToGlobal(pos()).y() - ilkKonum.y() + y();

    QWidget *p = parentWidget();

    // --- SINIRLAMA ---

    // soldan çıkmasın
    if (yeniX < 0)
        yeniX = 0;

    // sağdan çıkmasın
    if (yeniX + width() > p->width())
        yeniX = p->width() - width();

    // yukarıdan çıkmasın
    if (yeniY < 0)
        yeniY = 0;

    // aşağıdan çıkmasın
    if (yeniY + height() > p->height())
        yeniY = p->height() - height();

    setGeometry(yeniX, yeniY, width(), height());

    emit moved();
}
