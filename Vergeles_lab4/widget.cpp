#include "widget.h"

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
{
    edit = new QLineEdit(this);
    spin = new QSpinBox(this);
    lbl1 = new QLabel("&e - QLineEdit", this);
    lbl2 = new QLabel("&s - QSpinBox", this);
    valid = new QIntValidator(0, 100, this);

    lbl1->setBuddy(edit);
    lbl2->setBuddy(spin);
    lbl1->move(10,30);
    lbl2->move(120,30);
    \
    edit->setValidator(valid);
    edit->move(10, 0);

    spin->move(120, 0);


    connect(edit, SIGNAL(textEdited(QString)), this, SLOT(heading(const QString)));
    connect(spin, SIGNAL(valueChanged(int)), this, SLOT(rightborder(int)));
}

void Widget::rightborder(int top)
{
    valid->setTop(top);
    edit->setValidator(valid);
}

void Widget::heading(const QString &v)
{
    setWindowTitle(v);
    const QString str = edit->text();
    int m = str.toInt();
    if(m>valid->top() or m<0)
    {
        edit->setText("incorrect");
        setWindowTitle(edit->text());
    }
}

Widget::~Widget()
{
}

