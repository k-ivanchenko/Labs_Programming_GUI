#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>
#include <QLCDNumber>
#include <QLabel>
#include <QMoveEvent>
#include <QMouseEvent>
class MyWidget : public QMainWindow
{
    Q_OBJECT
private:
    QLCDNumber *num1;
    QLCDNumber *num2;
    QLabel *lbl;


public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();
protected:

    void mouseMoveEvent(QMouseEvent *e);
};
#endif // MYWIDGET_H
