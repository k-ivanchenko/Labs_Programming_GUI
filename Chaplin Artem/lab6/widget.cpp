#include "widget.h"
#include "ui_widget.h"
#include <QMainWindow>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(700, 500);
    setMinimumSize(700, 300);

    QBoxLayout *layout1 = new QBoxLayout(QBoxLayout::LeftToRight, this);
    QBoxLayout *layout2 = new QBoxLayout(QBoxLayout::TopToBottom, this);

    lclick=0;
    rclick=0;

    spin1 = new QSpinBox(this);
    spin2 = new QSpinBox(this);
    spin3 = new QSpinBox(this);
    spin4 = new QSpinBox(this);
    spin5 = new QSpinBox(this);
    spin6 = new QSpinBox(this);
    spin7 = new QSpinBox(this);
    spin8 = new QSpinBox(this);
    indicator1 = new QLCDNumber(4, this);
    indicator2 = new QLCDNumber(4, this);

    spin1->setMaximum(9999);
    spin2->setMaximum(9999);
    spin3->setMaximum(9999);
    spin4->setMaximum(9999);
    spin5->setMaximum(9999);
    spin6->setMaximum(9999);
    spin7->setMaximum(9999);
    spin8->setMaximum(9999);

    spin1->setEnabled(false);
    spin2->setEnabled(false);
    spin3->setEnabled(false);
    spin4->setEnabled(false);
    spin5->setEnabled(false);
    spin6->setEnabled(false);
    spin7->setEnabled(false);
    spin8->setEnabled(false);

    layout1->setSpacing(25);
    layout2->setSpacing(50);

    layout1->addWidget(spin1);
    layout1->addWidget(spin2);
    layout1->addWidget(spin3);
    layout1->addWidget(spin4);
    layout1->addWidget(spin5);
    layout1->addWidget(spin6);
    layout1->addWidget(spin7);
    layout1->addWidget(spin8);

    layout2->addWidget(indicator1, Qt::AlignHCenter);
    layout2->addWidget(indicator2, Qt::AlignHCenter);

    QWidget *widget1 = new QWidget(this);
    widget1->setLayout(layout1);
    widget1->setGeometry(0, 250, 700, 50);

    QWidget *widget2 = new QWidget(this);
    widget2->setLayout(layout2);
    widget2->setGeometry(250, 0, 200, 200);

    setMouseTracking(true);
}

void Widget::moveEvent(QMoveEvent *e) {
    QPoint pos = e->pos();
    spin1->setValue(pos.x());
    spin2->setValue(pos.y());
}

void Widget::resizeEvent(QResizeEvent *e) {
    QSize size = e->size();
    spin3->setValue(size.width());
    spin4->setValue(size.height());
}

void Widget::mouseMoveEvent(QMouseEvent *e) {
    QPoint pos=e->pos();

    spin5->setValue(pos.x());
    spin6->setValue(pos.y());

    spin7->setValue(e->globalX());
    spin8->setValue(e->globalY());
}

void Widget::mousePressEvent(QMouseEvent *e) {
    if(Qt::LeftButton&e->button()) {
        lclick++;
        indicator1->display(lclick);
    }
    else if (Qt::RightButton&e->button()) {
        rclick++;
        indicator2->display(rclick);
    }
}

void Widget::keyPressEvent(QKeyEvent *e) {
    if(Qt::Key_1==e->key()) {
        lclick=0;
        indicator1->display(lclick);
    }
    else if (Qt::Key_R==e->key()) {
        rclick=0;
        indicator2->display(rclick);
    }
}
Widget::~Widget()
{
    delete ui;
}
