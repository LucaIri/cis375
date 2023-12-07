#include "startpressed.h"
#include "ui_startpressed.h"

startPressed::startPressed(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::startPressed)
{
    ui->setupUi(this);
}

startPressed::~startPressed()
{
    delete ui;
}

