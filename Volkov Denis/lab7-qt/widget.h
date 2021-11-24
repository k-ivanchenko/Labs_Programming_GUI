#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QKeyEvent>
#include <QMouseEvent>



class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    //QLabel *lbl1;
    QLineEdit *line1;
    QLineEdit *line2;
    int a;
protected:
        void keyPressEvent(QKeyEvent *e);
        void mousePressEvent(QMouseEvent *e);
};
#endif // WIDGET_H
