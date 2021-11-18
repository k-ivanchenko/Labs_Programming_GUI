#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QCheckBox>
#include <QString>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    ~Widget();
private:
    QPushButton *zero;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *clear;
    QCheckBox *box;
    QLabel *lbl;
public slots:
    void setzero();
    void setone();
    void settwo();
    void setthree();
    void setfour();
    void setfive();
    void setsix();
    void setseven();
    void seteight();
    void setnine();
    void setclear();
    void setbox();

};
#endif // WIDGET_H
