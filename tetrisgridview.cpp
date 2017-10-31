#include "tetrisgridview.h"
#include "ui_tetrisgridview.h"
#include <QPainter>
#include <QPen>

TetrisGridView::TetrisGridView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TetrisGridView)
{
    ui->setupUi(this);
}

TetrisGridView::~TetrisGridView()
{
    delete ui;
}

void TetrisGridView::setTetrisGrid(TetrisGrid *tetrisGrid)
{
    this->tetrisGrid = tetrisGrid;
}

void TetrisGridView::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    drawGrid(painter);
    drawCells(painter);
}

void TetrisGridView::drawGrid(QPainter& painter)
{
    for (int x = 0; x <= tetrisGrid->width; x++)
    {
        painter.drawLine(x * CELL_SIZE, 0, x * CELL_SIZE, tetrisGrid->height * CELL_SIZE);
    }
    for (int y = 0; y <= tetrisGrid->height; y++)
    {
        painter.drawLine(0, y * CELL_SIZE, tetrisGrid->width * CELL_SIZE, y * CELL_SIZE);
    }
}

void TetrisGridView::drawCells(QPainter& painter)
{
    for (int x = 0; x < tetrisGrid->width; x++)
    {
        for (int y = 0; y < tetrisGrid->height; y++)
        {
            painter.fillRect(x * CELL_SIZE + 2, y * CELL_SIZE + 2, CELL_SIZE - 2, CELL_SIZE - 2, QBrush(tetrisGrid->getGridCell(x, y)));
        }
    }
}
