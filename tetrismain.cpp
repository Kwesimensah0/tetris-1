#include "tetrismain.h"
#include <QPainter>

TetrisMain::TetrisMain(QWidget *parent) : QWidget(parent)
{
}

void TetrisMain::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.setFont(QFont("Arial", 30));
    painter.drawText(rect(), Qt::AlignCenter, "Qt");
}
