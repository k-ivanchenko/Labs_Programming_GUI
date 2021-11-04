#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(300, 300);
    lne = new QLineEdit(this);
    spb1 = new QSpinBox(this);
    spb2 = new QSpinBox(this);
    lbl1 = new QLabel("&a - (line edit)", this);
    lbl2 = new QLabel("&s - (spin box #1)", this);
    lbl3 = new QLabel("&d - (spin box #2)", this);
    vld = new QIntValidator(0, 100, this);

    lne->move(0, 100);
    lbl2->move(100, 0);
    lbl3->move(200, 0);
    spb1->move(100, 100);
    spb2->move(200, 100);

    lbl1->setBuddy(lne);
    lbl2->setBuddy(spb1);
    lbl3->setBuddy(spb2);


    connect(spb1, SIGNAL(valueChanged(int)), this, SLOT(setLne(int)));
    connect(spb1, SIGNAL(valueChanged(int)), this, SLOT(setTit(int)));
    connect(spb2, SIGNAL(valueChanged(int)), this, SLOT(setTop(int)));
    connect(lne, SIGNAL(textEdited(QString)), this, SLOT(setSpb(QString)));


}

void MainWindow::setLne(int a){
    QString text = QString::number(a);
    lne->setText(text);
}

void MainWindow::setTit(int a){
    QString text = QString::number(a);
    setWindowTitle(text);
}

void MainWindow::setTop(int max){
    spb1->setMaximum(max);
    vld->setTop(max);
    lne->setValidator(vld);
}

void MainWindow::setSpb(const QString &text)
{
    int valSpb = text.toInt();
    spb1->setValue(valSpb);
}

MainWindow::~MainWindow()
{
}

