#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QtWidgets>
class Widget : public QWidget
{
    Q_OBJECT
public:
    QLCDNumber *lcd;
    QListWidget *list;
    QSlider *sld;
    QLabel *lbl;
    QPushButton *btn;
    QString str;
    int i;
    int k;
public slots:
void ADDLIST(int r);
void DISPLAY(int i);
void LIST();
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
