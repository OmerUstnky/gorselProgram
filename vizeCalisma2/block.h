#ifndef BLOCK_H
#define BLOCK_H

#include <QLabel>

class block : public QLabel
{
    Q_OBJECT
public:
    explicit block(QWidget *parent = nullptr);

signals:
};

#endif // BLOCK_H
