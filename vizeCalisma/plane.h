#ifndef PLANE_H
#define PLANE_H

#include <QLabel>

class plane : public QLabel
{
    Q_OBJECT
public:
    explicit plane(QWidget *parent = nullptr);

signals:
};

#endif // PLANE_H
