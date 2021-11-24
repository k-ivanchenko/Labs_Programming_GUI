#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSpinBox>
#include <QBoxLayout>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QPoint>

class Widget : public QWidget
{
    Q_OBJECT
public:
    QSpinBox * spin1;
    QSpinBox * spin2;
    bool a = false;
    bool b = false;
public slots:
    void keyPressEvent (QKeyEvent *e);
    void mousePressEvent (QMouseEvent *e);
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
