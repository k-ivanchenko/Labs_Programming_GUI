#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(250, 400);
   lcd1 = new QLCDNumber(2, this);
   lcd2 = new QLCDNumber(2, this);
   lcd3 = new QLCDNumber(2, this);
   lcd4 = new QLCDNumber(2, this);
   lcd5 = new QLCDNumber(2, this);
   lcd6 = new QLCDNumber(2, this);
   lcd7 = new QLCDNumber(2, this);
   lcd8 = new QLCDNumber(2, this);
   lbl1 = new QLabel("HELP",this);
   lbl2 = new QLabel("HELP",this);

   lcd1->move(10, 100);
   lcd2->move(10, 150);
   lcd3->move(10, 200);
   lcd4->move(10, 250);
   lcd5->move(200, 100);
   lcd6->move(200, 150);
   lcd7->move(200, 200);
   lcd8->move(200, 250);
   lbl1->move(10, 50);
   lbl2->move(200, 50);




}
void Widget::moveEvent(QMoveEvent *e){
    QPoint pos = e->pos();
    int x=pos.x();
    int y=pos.y();
    QString P =QString :: number(x);
    QString L =QString :: number(y);
      lcd1->display(P);
      lcd2->display(L);

}


void Widget::resizeEvent(QResizeEvent *e){
 QSize size = e->size();
 int w=size.width();
 int h=size.height();
 QString D =QString :: number(w);
 QString B =QString :: number(h);

lcd3->display(D);
lcd4->display(B);
}



void Widget::mouseMoveEvent(QMouseEvent* e)
{
    int x=e->globalX();
    int y=e->globalY();
    QString str=QString::number(x,10);
    QString dtr=QString::number(y,10);
    bool shiftPress=e->modifiers()&Qt::ShiftModifier;
    bool leftPress=e->buttons()&Qt::LeftButton;
if(shiftPress&leftPress)
    lcd5->display(str);
    lcd6->display(dtr);


    lcd7->display(e->pos().x());
    lcd8->display(e->pos().y());
}

void Widget::mousePressEvent(QMouseEvent *e){
    int L=0;
    int R=0;

for(int i=0;i<10;i++){

    if(Qt::LeftButton&e->button()) {

       L++;
            lbl1->setNum(L);
        }
     else if (Qt::RightButton&e->button()) {
       R++;
        lbl2->setNum(R);
    }}
}





void Widget::keyPressEvent(QKeyEvent *e){
    if (Qt::Key_C==e->key())
        this->lbl1->setText("HELP");
    else if(Qt::Key_R==e->key())
        this->lbl2->setText("HELP");
}

Widget::~Widget()
{
    delete ui;
}

