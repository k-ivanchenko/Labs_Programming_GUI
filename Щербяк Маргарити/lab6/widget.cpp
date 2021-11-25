#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    X_Window = new QLabel(this);
    Y_Window = new QLabel(this);

    Window_width = new QLabel(this);
    Window_height = new QLabel(this);

    X_Mouse = new QLabel(this);
    Y_Mouse = new QLabel(this);

    X_MouseWindow = new QLabel(this);
    Y_MouseWindow = new QLabel(this);

    LeftClick = new QLCDNumber(this);
    RightClick = new QLCDNumber(this);

    layout = new QBoxLayout(QBoxLayout::TopToBottom, this);
    layout->setAlignment(Qt::AlignCenter);

    layout->addWidget(X_Window);
    layout->addWidget(Y_Window);

    layout->addWidget(Window_width);
    layout->addWidget(Window_height);

    layout->addWidget(X_Mouse);
    layout->addWidget(Y_Mouse);

    layout->addWidget(X_MouseWindow);
    layout->addWidget(Y_MouseWindow);

    layout->addWidget(LeftClick);
    layout->addWidget(RightClick);

    L = 0;
    R = 0;
}

Widget::~Widget()
{
}

void Widget::resizeEvent(QResizeEvent *e){
    Window_width->setText(QString::number(e->size().width())+"weight");
    Window_height->setText(QString::number(e->size().height())+"height");
}

void Widget::moveEvent(QMoveEvent *e){
   X_Window->setText(QString::number(e->pos().x())+"coordinate widget x");
   Y_Window->setText(QString::number(e->pos().y())+"coordinate widget y");
}

void Widget::mouseMoveEvent(QMouseEvent *e){
    X_Mouse->setText(QString::number(e->x())+"coordinate mouse in widget x");
    Y_Mouse->setText(QString::number(e->y())+"coordinate mouse in widget y ");

    X_MouseWindow->setText(QString::number(e->globalX())+"coordinate mouse in global x ");
    Y_MouseWindow->setText(QString::number(e->globalY())+"coordinate mouse in global y ");
}

void Widget::mousePressEvent(QMouseEvent *e){


    bool leftClick = e->buttons() & Qt::LeftButton;
    bool rightClick = e->buttons() & Qt::RightButton;

    if(leftClick==true){
        L++;
        LeftClick->display(L);
    }
    else if(rightClick==true){
        R++;
        RightClick->display(R);
    }
}

void Widget::keyPressEvent(QKeyEvent *e){
    bool shiftPressed = e->modifiers() & Qt::ShiftModifier;
    if(Qt::Key_L == e->key()){
        L = 0;
        LeftClick->display(L);
    }
    else if(Qt::Key_R == e->key() && shiftPressed){
        R = 0;
        RightClick->display(R);
    }
}
