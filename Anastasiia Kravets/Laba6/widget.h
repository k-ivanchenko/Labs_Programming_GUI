#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLCDNumber>
#include <QLabel>
#include <QResizeEvent>
#include <QMouseEvent>
#include <QMouseEvent>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:

    QLCDNumber *lcd1;
    QLCDNumber *lcd2;
    QLCDNumber *lcd3;
    QLCDNumber *lcd4;
    QLCDNumber *lcd5;
    QLCDNumber *lcd6;
    QLCDNumber *lcd7;
    QLCDNumber *lcd8;
    QLabel *lbl1;
    QLabel *lbl2;

protected:
void resizeEvent(QResizeEvent *e);
void mousePressEvent(QMouseEvent *e);
void mouseMoveEvent(QMouseEvent* e);
void moveEvent(QMoveEvent *e);
void keyPressEvent(QKeyEvent *e);



public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
