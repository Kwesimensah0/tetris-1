#ifndef TETRISGRIDVIEW_H
#define TETRISGRIDVIEW_H

#include "tetrisgrid.h"
#include <QWidget>

namespace Ui {
class TetrisGridView;
}

class TetrisGridView : public QWidget
{
    Q_OBJECT

public:
    explicit TetrisGridView(QWidget *parent = 0);
    ~TetrisGridView();
    void setTetrisGrid(TetrisGrid *tetrisGrid);

protected:
    void paintEvent(QPaintEvent *event);

private:
    TetrisGrid *tetrisGrid;
    Ui::TetrisGridView *ui;
    static const int CELL_SIZE = 30;
    void drawGrid(QPainter& painter);
    void drawCells(QPainter& painter);
};

#endif // TETRISGRIDVIEW_H
