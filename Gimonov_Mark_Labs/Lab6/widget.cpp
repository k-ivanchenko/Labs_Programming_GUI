#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    lbl_xWindow = new QLabel(this);
    lbl_yWindow = new QLabel(this);

    lbl_width = new QLabel(this);
    lbl_height = new QLabel(this);

    lbl_xMouseWidget = new QLabel(this);
    lbl_yMouseWidget = new QLabel(this);

    lbl_xMouseWindow = new QLabel(this);
    lbl_yMouseWindow = new QLabel(this);

    lcd_LeftClick = new QLCDNumber(this);
    lcd_RightClick = new QLCDNumber(this);

    layout = new QBoxLayout(QBoxLayout::TopToBottom, this);
    layout->setAlignment(Qt::AlignCenter);

    layout->addWidget(lbl_xWindow);
    layout->addWidget(lbl_yWindow);

    layout->addWidget(lbl_width);
    layout->addWidget(lbl_height);

    layout->addWidget(lbl_xMouseWidget);
    layout->addWidget(lbl_yMouseWidget);

    layout->addWidget(lbl_xMouseWindow);
    layout->addWidget(lbl_yMouseWindow);

    layout->addWidget(lcd_LeftClick);
    layout->addWidget(lcd_RightClick);

    countL = 0;
    countR = 0;

    setMouseTracking(true);
}

Widget::~Widget()
{
}

void Widget::resizeEvent(QResizeEvent *e){
    lbl_width->setText(QString::number(e->size().width()) + " widget width");
    lbl_height->setText(QString::number(e->size().height())+ " widget height");
}

void Widget::moveEvent(QMoveEvent *e){
    lbl_xWindow->setText(QString::number(e->pos().x()) + " widget x");
    lbl_yWindow->setText(QString::number(e->pos().y()) + " widget y");
}

void Widget::mouseMoveEvent(QMouseEvent *e){
    lbl_xMouseWidget->setText(QString::number(e->x()) + " mouse in widget x");
    lbl_yMouseWidget->setText(QString::number(e->y()) + " mouse in widget y");

    lbl_xMouseWindow->setText(QString::number(e->globalX()) + " mouse in global x");
    lbl_yMouseWindow->setText(QString::number(e->globalY()) + " mouse in global y");
}

void Widget::mousePressEvent(QMouseEvent *e){


    bool leftClick = e->buttons() & Qt::LeftButton;
    bool rightClick = e->buttons() & Qt::RightButton;

    if(leftClick){
        countL++;
        lcd_LeftClick->display(countL);
    }
    else if(rightClick){
        countR++;
        lcd_RightClick->display(countR);
    }
}

void Widget::keyPressEvent(QKeyEvent *e){
    bool shiftPressed = e->modifiers() & Qt::ShiftModifier;
    if(Qt::Key_L == e->key()){
        countL = 0;
        lcd_LeftClick->display(countL);
    }
    else if(Qt::Key_R == e->key() && shiftPressed){
        countR = 0;
        lcd_RightClick->display(countR);
    }
}

