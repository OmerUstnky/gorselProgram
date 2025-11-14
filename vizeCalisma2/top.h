#ifndef TOP_H
#define TOP_H

#include <QLabel>
#include <QMainWindow>
#include <QMouseEvent>

class top : public QLabel
{
    Q_OBJECT
public:
    explicit top(QWidget *parent = nullptr);
    QPoint ilkKonum;
private:
    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
signals:
    void moved();
};

#endif // TOP_H
