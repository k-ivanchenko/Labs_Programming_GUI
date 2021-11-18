#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(200, 200);

    layout = new QHBoxLayout(this);
    label1= new QLabel("Hello", this);
    indicator1 = new QLCDNumber(this);
    indicator2 = new QLCDNumber(this);

    label1->setMaximumWidth(100);
    label1->setMaximumHeight(50);
    indicator1->setMaximumWidth(100);
    indicator1->setMaximumHeight(50);
    indicator2->setMaximumWidth(100);
    indicator2->setMaximumHeight(50);

    layout->addWidget(label1);
    layout->addWidget(indicator1);
    layout->addWidget(indicator2);
}

void Widget::mouseMoveEvent(QMouseEvent *e) {
    QPoint pos=e->pos();

    if((pos.x() >= label1->x() & pos.x() <= label1->x()+label1->width()) & (pos.y() >= label1->y() & pos.y() <= label1->y()+label1->height())) {
        label1->move(pos.x()-label1->width()/2, pos.y()-label1->height()/2);
        indicator1->display(pos.x());
        indicator2->display(pos.y());
    }
    else if ((pos.x() >= indicator1->x() & pos.x() <= indicator1->x()+indicator1->width()) & (pos.y() >= indicator1->y() & pos.y() <= indicator1->y()+indicator1->height())) {
        indicator1->move(pos.x()-indicator1->width()/2, pos.y()-indicator1->height()/2);
    }
    else if ((pos.x() >= indicator2->x() & pos.x() <= indicator2->x()+indicator2->width()) & (pos.y() >= indicator2->y() & pos.y() <= indicator2->y()+indicator2->height())) {
        indicator2->move(pos.x()-indicator2->width()/2, pos.y()-indicator2->height()/2);
    }
}
void Widget::mousePressEvent(QMouseEvent *e) {
    setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(e);
}
void Widget::mouseReleaseEvent(QMouseEvent *e) {
    setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(e);
}

Widget::~Widget()
{
    delete ui;
}

