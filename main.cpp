#include <QApplication>
#include "tetrismain.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TetrisMain tm;
    tm.showFullScreen();

    return a.exec();
}
