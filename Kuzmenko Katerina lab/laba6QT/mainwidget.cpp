#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QMainWindow(parent)
{
    lineEdit1 = new QLineEdit(this);
    lineEdit1->move(10, 10);
    lineEdit1->resize(100, 20);

    lineEdit2 = new QLineEdit(this);
    lineEdit2->move(10, 40);
    lineEdit2->resize(100, 20);

    lineEdit3 = new QLineEdit(this);
    lineEdit3->move(10, 70);
    lineEdit3->resize(100, 20);

    lineEdit4 = new QLineEdit(this);
    lineEdit4->move(10, 100);
    lineEdit4->resize(100, 20);

    lineEdit5 = new QLineEdit(this);
    lineEdit5->move(10, 130);
    lineEdit5->resize(100, 20);

    lineEdit6 = new QLineEdit(this);
    lineEdit6->move(10, 160);
    lineEdit6->resize(100, 20);

    lineEdit7 = new QLineEdit(this);
    lineEdit7->move(10, 190);
    lineEdit7->resize(100, 20);

    lineEdit8 = new QLineEdit(this);
    lineEdit8->move(10, 220);
    lineEdit8->resize(100, 20);

    setMouseTracking(true);

    label1 = new QLabel(this);
    label1->move(10, 250);
    label1->resize(100, 20);

    label2 = new QLabel(this);
    label2->move(10, 280);
    label2->resize(100, 20);

    this->resize(400, 310);

    QApplication::instance()->installEventFilter(this);

    timer = startTimer(30);
}

MainWidget::~MainWidget()
{
}

bool MainWidget::eventFilter(QObject *obj, QEvent *e)
{
    QRect window = geometry();

    if(e->type() == QEvent::Show){

        lineEdit1->setText(QString::number(this->pos().x()));
        lineEdit2->setText(QString::number(this->pos().y()));

        lineEdit3->setText(QString::number(this->size().width()));
        lineEdit4->setText(QString::number(this->size().height()));

        lineEdit5->setText(QString::number(this->cursor().pos().x() - window.x()));
        lineEdit6->setText(QString::number(this->cursor().pos().y() - window.y()));

        lineEdit7->setText(QString::number(this->cursor().pos().x()));
        lineEdit8->setText(QString::number(this->cursor().pos().y()));

        label1->setText("0");
        label2->setText("0");
    }

    if(e->type() == QEvent::Move){
        lineEdit1->setText(QString::number(this->pos().x()));
        lineEdit2->setText(QString::number(this->pos().y()));
    }

    if(e->type() == QEvent::Resize){
        lineEdit3->setText(QString::number(this->size().width()));
        lineEdit4->setText(QString::number(this->size().height()));
    }

    if(e->type() == QEvent::MouseButtonPress){
        if(obj == this){
            QMouseEvent* mevent = static_cast<QMouseEvent*>(e);
            if(mevent->button() == Qt::MouseButton::LeftButton)
                label1->setText(QString::number(label1->text().toInt() + 1));
            if(mevent->button() == Qt::MouseButton::RightButton)
                label2->setText(QString::number(label2->text().toInt() + 1));
        }
    }

    if(e->type() == QEvent::KeyPress){
        QKeyEvent* kevent = static_cast<QKeyEvent*>(e);
        if(kevent->key() == 'L')
            label1->setText("0");
        if(kevent->key() == 'R')
            label2->setText("0");
    }
    return false;
}

void MainWidget::timerEvent(QTimerEvent *e){
    if(e->timerId() == timer){
        QRect window = geometry();
        lineEdit5->setText(QString::number(this->cursor().pos().x() - window.x()));
        lineEdit6->setText(QString::number(this->cursor().pos().y() - window.y()));
        lineEdit7->setText(QString::number(this->cursor().pos().x()));
        lineEdit8->setText(QString::number(this->cursor().pos().y()));
    }
}
