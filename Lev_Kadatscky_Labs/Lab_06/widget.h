#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSpinBox>
#include <QLCDNumber>
#include <QBoxLayout>
#include <QPoint>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QSize>

class Widget : public QWidget
{
    Q_OBJECT

    QSpinBox *spin1;
    QSpinBox *spin2;
    QSpinBox *spin3;
    QSpinBox *spin4;
    QSpinBox *spin5;
    QSpinBox *spin6;
    QSpinBox *spin7;
    QSpinBox *spin8;
    QLCDNumber *lcd1;
    QLCDNumber *lcd2;
    QBoxLayout *layout1;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void resizeEvent(QResizeEvent *e);
    void moveEvent(QMoveEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);
};
#endif // WIDGET_H
