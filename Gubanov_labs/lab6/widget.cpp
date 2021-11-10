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
void Widget ::mouseMoveEvent(QMouseEvent *e)
{
    edit5->setText(QString::number(e->x()) + " mouse in widget x");
    edit6->setText(QString::number(e->y()) + " mouse in widget y");

    edit5->setText(QString::number(e->globalX()) + " mouse in global x");
    edit6->setText(QString::number(e->globalY()) + " mouse in global Y");
}

void Widget::mousePressEvent(QMouseEvent *e){


    bool leftClick = e->buttons() & Qt::LeftButton;
    bool rightClick = e->buttons() & Qt::RightButton;

    if(leftClick){
        btL++;
        lbl1->setNum(btL);
    }
    else if(rightClick){
        btR++;
        lbl2->setNum(btR);
    }
    //if(Qt::LeftButton&e->button())
      //  lbl1->setNum(lbl1->(setValue)+1);
}

void Widget::keyPressEvent(QKeyEvent *e){
    bool shiftPressed = e->modifiers() & Qt::ShiftModifier;
    if(Qt::Key_L == e->key()){
        btL = 0;
        lbl1->setNum(btL);
    }
    else if(Qt::Key_R == e->key() && shiftPressed){
        btR = 0;
        lbl2->setNum(btR);
    }
}
