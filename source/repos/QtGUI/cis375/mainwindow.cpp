    #include "mainwindow.h"
#include "ui_mainwindow.h"
#include "startpressed.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_p1input_returnPressed()
{
    ui->p2input->setFocus();
}


void MainWindow::on_p2input_returnPressed()
{
    ui->startButt->setFocus();
}


void MainWindow::on_startButt_clicked()
{
    startPressed start;
    start.setModal(true);
    start.exec();
}

