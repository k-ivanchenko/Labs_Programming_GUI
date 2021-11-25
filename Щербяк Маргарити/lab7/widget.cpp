#include "widget.h"
#include<QMoveEvent>
#include<QString>
#include<QMouseEvent>
#include<QRect>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    edit1 = new QLineEdit(this);
    edit2 = new QLineEdit(this);
    edit1 -> move(100, 150);
    edit2 -> move(350, 150);

}

Widget::~Widget()
{
}
void Widget::moveEvent(QMoveEvent *e){
    int line=edit1->x();
    int edit=edit2->x();
edit1->setText(QString::number (line) + " widget x1");
edit2->setText(QString::number (edit) + " widget x2");
}


void Widget :: mouseMoveEvent(QMouseEvent *e){
    int edit1_x = edit1 -> x();
    int edit1_y = edit1 -> y();
    int edit1_w = edit1 -> width();
    int edit1_h = edit1 -> height();
    int edit2_x = edit2 -> x();
    int edit2_y = edit2 -> y();
    int edit2_w = edit2 -> width();
    int edit2_h =edit2 -> height();

    bool buttonPress = e -> buttons()&Qt::RightButton;//buttonPress==true,якщо праву кнопку миші натиснуто
    QRect edit1_pos(edit1_x,edit1_y,edit1_w,edit1_h);//Конструирует прямоугольник с координатами (x, y),
    //в качестве его верхнего левого угла и заданными шириной (width) и высотой (height).
    QRect edit2_pos(edit2_x, edit2_y, edit2_w, edit2_h);
        QPoint pos=e->pos();
        if(buttonPress && edit1_pos.contains(pos))
        {
            int new_x = edit1_x+1;
            int new_y = edit1_y+1;
            edit1 -> move(new_x,new_y);
        }

        if(buttonPress && edit2_pos.contains(pos))
        {
            int new_x = edit2_x+1;
            int new_y = edit2_y+1;
            edit2 -> move(new_x,new_y);
        }

        bool buttonPress1 = e -> buttons()&Qt::LeftButton;//buttonPress==true,якщо праву кнопку миші натиснуто
            QPoint pos1=e->pos();
            if(buttonPress1 && edit1_pos.contains(pos1))
            {
                int new_x1 = edit1_x-1;
                int new_y1 = edit1_y-1;
                edit1 -> move(new_x1,new_y1);
            }

              else if(buttonPress1 && edit2_pos.contains(pos1))
            {
                int new_x1 = edit2_x-1;
                int new_y1 = edit2_y-1;
                edit2 -> move(new_x1,new_y1);
            }

    }
