#include "lab7.h"
#include "ui_lab7.h"

lab7::lab7(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lab7)
{
    ui->setupUi(this);
}

lab7::~lab7()
{
    delete ui;
}

