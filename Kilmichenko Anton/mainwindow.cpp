#include "mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    lbl1 = new QLabel("&Edit", this);
    lbl1->move(125, 100);
    lbl2 = new QLabel("&Spin", this);
    lbl2->move(235, 100);

    edit = new QLineEdit(this);
    edit->move(75, 150);

    spin=new QSpinBox (this);
    spin->move(200, 150);
    spin->setMinimum(-100);
    spin->setMaximum(-1);
    spin->setSingleStep(1);

    resize(400, 400);

    lbl1->setBuddy(edit);
    lbl2->setBuddy(spin);

    mvr = new MyValidator();
    edit->setValidator(mvr);



     connect(spin, SIGNAL(valueChanged(int)),this, SLOT(spinChange(int)));
     connect(edit, SIGNAL(textChanged(QString)), this, SLOT(textChange(QString)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::spinChange(int i)
{
    QString str = QString::number(i , 'g',  0);
    edit -> setText(str);
}

void MainWindow::textChange(QString str)
{
    setWindowTitle(str);
}

