#include "window.h"
#include "ui_window.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
{
    resize(300, 250);
    text1 = new QLineEdit(this);
    text2 = new QLineEdit(this);
    list = new QListWidget(this);
    combo = new QComboBox(this);
    butt1 = new QPushButton("Delete", this);
    butt2 = new QPushButton("Delete", this);
    lcd1 = new QLCDNumber(10, this);
    lcd2 = new QLCDNumber(10, this);
    slide1 = new QSlider(Qt::Horizontal, this);
    slide1 -> setRange(0,0);
    slide2 = new QSlider(Qt::Horizontal, this);
    slide2 -> setRange(0,0);

    text1 -> move(10,10);
    text2 -> move(150,10);
    list -> move(10, 50);
    combo -> move(150, 50);
    butt1 -> move(10, 90);
    butt2 -> move(150, 90);
    lcd1 -> move(10, 130);
    lcd2 -> move(150, 130);
    slide1 -> move(10, 170);
    slide2 -> move(150, 170);

    connect(text1, SIGNAL(returnPressed()),this,  SLOT(Add1()));
    connect(text2, SIGNAL(returnPressed()),this,  SLOT(Add2()));
    connect(butt1, SIGNAL(pressed()),this, SLOT(del1()));
    connect(butt2, SIGNAL(pressed()),this, SLOT(del2()));
    connect(slide1, SIGNAL(valueChanged(int)),this, SLOT(chg1(int)));
    connect(slide2, SIGNAL(valueChanged(int)),this, SLOT(chg2(int)));

}
void Window :: chg1(int a)
{
    lcd1 -> display(a);
}
void Window :: chg2(int a)
{
    lcd2 -> display(a);
}
void Window :: SetTitle(const QString &t)
{
    setWindowTitle(t);
}
void Window :: Add1()
{
    QString b = text1 -> text();
    list -> addItem(b);
    int a = list -> count();
    slide1 -> setRange(0, a-1);
}
void Window :: Add2()
{
    QString b = text2 -> text();
    combo -> addItem(b);
    int a = combo -> count();
    slide2 -> setRange(0, a-1);
}
void Window :: del1()
{
    int a = lcd1 -> value();
    list -> takeItem(a);
    int c = list -> count();
    slide1 -> setRange(0, c-1);
}
void Window :: del2()
{
    int a = lcd2 -> value();
    combo -> removeItem(a);
    int c = combo -> count();
    slide2 -> setRange(0, c-1);
}
Window::~Window()
{
}

