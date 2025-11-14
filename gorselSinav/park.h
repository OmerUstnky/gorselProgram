#ifndef PARK_H
#define PARK_H

#include <QWidget>
#include <QLabel>

class park : public QLabel
{
    Q_OBJECT
public:
    explicit park(QWidget *parent = nullptr);

signals:

};

#endif // PARK_H
