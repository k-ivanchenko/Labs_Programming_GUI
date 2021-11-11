#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QSlider>
#include <QLabel>
#include <QListWidget>
#include <QLCDNumber>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QPushButton *btn;
    QSlider *slide;
    QLabel *lbl;
    QLabel *lbl2;
    QListWidget *list1;
    QListWidget *list2;
    QLCDNumber *lcd;
    int time =0;
public slots:
    void setTuch();
    void setSlide(int);
    void timerEvent (QTimerEvent*);
};
#endif // WIDGET_H
