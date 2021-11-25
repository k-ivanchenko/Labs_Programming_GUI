#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("lab03");
    resize(400,400);

    btn1 = new QPushButton("Button 1", this);
    btn2 = new QPushButton("Button 2", this);

    chbox1 = new QCheckBox("flag 1", this);
    chbox2 = new QCheckBox("flag 2", this);
    chbox3 = new QCheckBox("flag 3", this);

    rbtn1 = new QRadioButton("RadioButton 1", this);
    rbtn2 = new QRadioButton("RadioButton 2", this);
    rbtn3 = new QRadioButton("RadioButton 3", this);

    lbl = new QLabel("Enable", this);

    lbl->move(175, 100);
    lbl->resize(100,100);

    btn1->move(100, 200);
    btn2->move(200, 200);

    chbox1->move(250,230);
    chbox2->move(250,250);
    chbox3->move(250,270);

    rbtn1->move(100,230);
    rbtn2->move(100,250);
    rbtn3->move(100,270);

    connect(rbtn1, SIGNAL(toggled(bool)), this, SLOT(RButtonDo1(bool)));
    connect(rbtn2, SIGNAL(toggled(bool)), this, SLOT(RButtonDo2(bool)));
    connect(rbtn3, SIGNAL(toggled(bool)), this, SLOT(RButtonDo3(bool)));
    connect(chbox1, SIGNAL(toggled(bool)), this, SLOT(CHBoxDo1(bool)));
    connect(chbox2, SIGNAL(toggled(bool)), this, SLOT(CHBoxDo2(bool)));
    connect(chbox3, SIGNAL(toggled(bool)), this, SLOT(CHBoxDo3(bool)));
    connect(btn1, SIGNAL(clicked()), this, SLOT(ButtonDo1()));
    connect(btn2, SIGNAL(clicked()), this, SLOT(ButtonDo2()));
}

void MainWindow::RButtonDo1(bool state)
{
    switch (state)
    {
        case false:
    {
        chbox1->setChecked(false);
        break;
    }
        case true:
    {
         chbox1->setChecked(true);
         break;
    }
    }
}

void MainWindow::RButtonDo2(bool state)
{
    switch (state)
    {
        case false:
    {
        chbox2->setChecked(false);
        break;
    }
        case true:
    {
         chbox2->setChecked(true);
         break;
    }
    }
}

void MainWindow::RButtonDo3(bool state)
{
    switch (state)
    {
        case false:
    {
        chbox3->setChecked(false);
        break;
    }
        case true:
    {
         chbox3->setChecked(true);
         break;
    }
    }
}

void MainWindow::CHBoxDo1(bool state)
{
    switch (state)
    {
        case false:
    {
        rbtn2->setEnabled(true);
        break;
    }
        case true:
    {
         rbtn2->setEnabled(false);
         break;
    }
    }
}

void MainWindow::CHBoxDo2(bool state)
{
    switch (state)
    {
        case false:
    {
        rbtn3->setEnabled(true);
        break;
    }
        case true:
    {
         rbtn3->setEnabled(false);
         break;
    }
    }
}

void MainWindow::CHBoxDo3(bool state)
{
    switch (state)
    {
        case false:
    {
        rbtn1->setEnabled(true);
        break;
    }
        case true:
    {
         rbtn1->setEnabled(false);
         break;
    }
    }
}

void MainWindow::ButtonDo1()
{
    rbtn1->setEnabled(true);
    rbtn2->setEnabled(true);
    rbtn3->setEnabled(true);
    chbox1->setEnabled(true);
    chbox2->setEnabled(true);
    chbox3->setEnabled(true);
    lbl->setText("Enable");
}

void MainWindow::ButtonDo2()
{
    rbtn1->setEnabled(false);
    rbtn2->setEnabled(false);
    rbtn3->setEnabled(false);
    chbox1->setEnabled(false);
    chbox2->setEnabled(false);
    chbox3->setEnabled(false);
    lbl->setText("Disable");
}



MainWindow::~MainWindow()
{
}

