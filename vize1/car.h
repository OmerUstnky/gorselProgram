#ifndef CAR_H
#define CAR_H

#include <QLabel>

class car : public QLabel
{
    Q_OBJECT
public:
    explicit car(QWidget *parent = nullptr);

signals:
};

#endif // CAR_H
