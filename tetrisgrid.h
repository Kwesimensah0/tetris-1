#ifndef TETRISGRID_H
#define TETRISGRID_H

#include <QObject>
#include <QColor>

class TetrisGrid : public QObject
{
    Q_OBJECT
public:
    int width;
    int height;

    explicit TetrisGrid(int width, int height, QObject *parent = 0);
    ~TetrisGrid();

    //top left corner is x=0, y=0
    QColor getGridCell(int x, int y);
    void setGridCell(int x, int y, QColor cellColor);

private:
    QColor *grid;
    void randomize();

signals:

public slots:
};

#endif // TETRISGRID_H
