#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(400,300);

    lcd = new QLCDNumber(5, this);
    lcd->move(25, 25);

    cbox = new QComboBox(this);
    cbox->move(25, 75);
    cbox->setEditable(true);

    lw = new QListWidget(this);
    lw->resize(100, 100);
    lw->move(200, 25);

    sld = new QSlider(Qt::Horizontal, this);
    sld->move(150, 150);
    sld->setTickPosition(QSlider::TicksBothSides);
    sld->setRange(1, 50);
    sld->setTracking(true);

    btn = new QPushButton("My Button",this);
    btn->move(150, 200);

    connect(cbox, SIGNAL(currentIndexChanged(int)), this, SLOT(CboxChange())); 
    connect(cbox, SIGNAL(currentIndexChanged(int)), this, SLOT(clearEditText()));
    connect(btn, SIGNAL(clicked()), this, SLOT(LWChange()));
    connect(sld, SIGNAL(valueChanged(int)),this, SLOT(SLDChange(int)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::CboxChange()
{

    int n = cbox->count();
    lcd->display(n);
    cbox->setCurrentIndex(-1);
}


void MainWindow::LWChange()
{
    QString str1;
    for(int i = 0; i < cbox->count(); i++)
    {
        str1 = cbox->itemText(i);
        lw->insertItem(i, str1);
    }
}

void MainWindow::SLDChange(int i)
{
    cbox->setMaxCount(i);
    lcd->display(i);
}
