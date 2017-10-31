#ifndef TETRISMAIN_H
#define TETRISMAIN_H

#include <QWidget>

class TetrisMain : public QWidget
{
    Q_OBJECT
public:
    explicit TetrisMain(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);

signals:

public slots:
};

#endif // TETRISMAIN_H
