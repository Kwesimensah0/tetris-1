#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tetrisGridView->setTetrisGrid(new TetrisGrid(10, 30));
}

MainWindow::~MainWindow()
{
    delete ui;
}
