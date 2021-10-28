#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(500,150);
    line = new QLineEdit(this);
    spin1 = new QSpinBox(this);
    spin2 = new QSpinBox(this);
    labe1 = new QLabel("&Text", this);
    labe2 = new QLabel("&Spin1", this);
    labe3 = new QLabel("&Spin2", this);
    val = new QIntValidator(10,1000,this);
    labe1 -> move(10,10);
    labe2 -> move(150,10);
    labe3 -> move(270,10);
    labe1 -> setBuddy(line);
    labe2 -> setBuddy(spin1);
    labe3 -> setBuddy(spin2);
    line -> setValidator(val);
    line -> move(10,40);
    spin1 -> move(120,40);
    spin1 -> setMinimum(5);
    spin1 -> setMaximum(100);
    spin1 -> setSingleStep(5);
    spin1 -> setPrefix("{ ");
    spin1 -> setSuffix(" }");
    spin2 -> move(240,40);
    spin2 -> setMinimum(20);
    spin2 -> setMaximum(100);
    spin2 -> setSingleStep(10);
    spin2 -> setPrefix("[ ");
    spin2 -> setSuffix(" ]");

    connect(spin1, SIGNAL(valueChanged(QString)), line, SLOT(setText(QString)));
    connect(line, SIGNAL(textEdited(QString)), this, SLOT(el()));
    connect(spin2, SIGNAL(valueChanged(int)), this, SLOT(Top(int)));
    connect(line, SIGNAL(textChanged(QString)), this, SLOT(setTitle(const QString &)));
}

void MainWindow :: setTitle(const QString &t)
{
    setWindowTitle(t);
}
void MainWindow :: Top(int a)
{
    spin1 -> setMaximum(a);
}
void MainWindow :: el()
{
    QString a = line -> text();
    int b = a.toInt();
    spin1 -> setValue(b);
}

MainWindow::~MainWindow()
{

}

