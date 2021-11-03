#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QSlider>
#include <QLabel>
#include <QListWidget>
#include <QLCDNumber>
#include <QString>
#include <QList>


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
    QLabel *lbl;
    QLabel *lblSlider;
    QLCDNumber *lcd;
private slots:
    void slotBtn();
    void slotSlider(int);

};
#endif // WIDGET_H
