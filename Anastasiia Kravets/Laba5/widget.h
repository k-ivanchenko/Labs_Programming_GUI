#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLCDNumber>
#include <QListWidget>
#include <QSlider>
#include <QLabel>
#include <QPushButton>
#include <QListWidgetItem>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    QLCDNumber *lcd;


    QListWidget *list;
    QSlider *slider;
    QLabel *label;
    QPushButton *button;
    QString str1;

public slots:
void LCDAD(int r);
void LC(int i);
void SHOW();



public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
