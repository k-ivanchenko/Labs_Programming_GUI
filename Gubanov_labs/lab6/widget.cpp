#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
  edit1=new QLineEdit(this);
  edit2=new QLineEdit(this);


  edit3=new QLineEdit(this);
  edit4=new QLineEdit(this);

  edit5=new QLineEdit(this);
  edit6=new QLineEdit(this);


  edit7=new QLineEdit(this);
  edit8=new QLineEdit(this);

  lbl1=new QLabel(this);
  lbl2=new QLabel(this);

  btR=0;
  btL=0;

    setMouseTracking(true);
}

Widget::~Widget()
{

}
void Widget :: resizeEvent(QResizeEvent *e)
{

    edit3->setText(QString::number(e->size().width()) + " widget width");
    edit4->setText(QString::number(e->size().height()) + " widget height");

}
void Widget :: moveEvent(QMoveEvent *e)
{
    edit1->setText(QString::number(e->pos().x()) + " widget x");
    edit2->setText(QString::number(e->pos().y()) + " widget y");
}

