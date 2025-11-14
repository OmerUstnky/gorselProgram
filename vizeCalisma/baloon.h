#ifndef BALOON_H
#define BALOON_H

#include <QLabel>

class baloon : public QLabel
{
    Q_OBJECT
public:
    explicit baloon(QWidget *parent = nullptr);

signals:
};

#endif // BALOON_H
