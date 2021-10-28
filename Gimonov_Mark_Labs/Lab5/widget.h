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
    QSlider *slider;
    QListWidget *list1;
    QListWidget *list2;
    QLabel *lbl;
    QLabel *lblSlider;
    QLCDNumber *lcd;
    int timer = 0;
private slots:
    void slotBtn();
    void slotSlider(int);
    void timerEvent(QTimerEvent*);

};
#endif // WIDGET_H
