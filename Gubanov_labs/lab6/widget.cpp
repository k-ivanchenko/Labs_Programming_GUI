#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
    layout=new QBoxLayout(QBoxLayout::LeftToRight,this);
    resize(400,400);
  edit1=new QLineEdit(this);
  edit2=new QLineEdit(this);


  edit3=new QLineEdit(this);
  edit4=new QLineEdit(this);

  edit5=new QLineEdit(this);
  edit6=new QLineEdit(this);


  edit7=new QLineEdit(this);
  edit8=new QLineEdit(this);
  layout -> addWidget(edit1);
      layout -> addWidget(edit2);
      layout -> addWidget(edit3);
      layout -> addWidget(edit4);
      layout -> addWidget(edit5);
      layout -> addWidget(edit6);
      layout -> addWidget(edit7);
      layout -> addWidget(edit8);

  lbl1=new QLabel(this);
  lbl1->move(10,100);
  lbl2=new QLabel(this);
  lbl2->move(300,100);

  btR=0;
  btL=0;

    setMouseTracking(true);
}

Widget::~Widget()
{

}
void Widget :: resizeEvent(QResizeEvent *e)
{



    edit3->setText(QString::number(e->size().width()) + " ");
    edit4->setText(QString::number(e->size().height()) + " ");

}
void Widget :: moveEvent(QMoveEvent *e)
{
    edit1->setText(QString::number(e->pos().x()) + "x");
    edit2->setText(QString::number(e->pos().y()) + " y");
}
void Widget ::mouseMoveEvent(QMouseEvent *e)
{
    edit5->setText(QString::number(e->x()) + "  x");
    edit6->setText(QString::number(e->y()) + "  y");

    edit5->setText(QString::number(e->globalX()) + "glob x");
    edit6->setText(QString::number(e->globalY()) + "glob Y");
}

void Widget::mousePressEvent(QMouseEvent *e){


    if(Qt::LeftButton&e->button()) {
           btL++;
         lbl1->setText(QString::number(btL,0));

       }
       else if (Qt::RightButton&e->button()) {
           btR++;
         lbl2->setText(QString::number(btR));

       }


}

void Widget::keyPressEvent(QKeyEvent *e){
    if(Qt::Key_L==e->key()) {
          btL=0;

        lbl1->setText("0");


       }
       else if ("r"==e->text()) {
           btR=0;

   lbl2->setText("0");
       }

}
