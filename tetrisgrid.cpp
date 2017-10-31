#include "tetrisgrid.h"
#include <cstdlib>

TetrisGrid::TetrisGrid(int width, int height, QObject *parent) : QObject(parent)
{
    this->width = width;
    this->height = height;
    this->grid = new QColor[width * height];
    randomize();
}

TetrisGrid::~TetrisGrid()
{
    delete[] grid;
}

QColor TetrisGrid::getGridCell(int x, int y)
{
    return grid[x + y * width];
}

void TetrisGrid::setGridCell(int x, int y, QColor cellColor)
{
    grid[x + y * width] = cellColor;
}

void TetrisGrid::randomize()
{
    for(int i = 0; i < width * height; i++)
    {
        switch(rand() % 4)
        {
        case 0:
            grid[i] = Qt::blue;
            break;
        case 1:
            grid[i] = Qt::red;
            break;
        case 2:
            grid[i] = Qt::yellow;
            break;
        case 3:
            grid[i] = Qt::green;
            break;
        }
    }
}
