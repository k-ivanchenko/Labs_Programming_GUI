#ifndef WIDGET_H
#define WIDGET_H

#include <QPushButton>
#include <QMainWindow>
#include <QString>
#include <QRadioButton>
#include <QCheckBox>
#include <QLabel>



class Widget : public QWidget
{
    Q_OBJECT

public:
   explicit Widget(QWidget *parent = 0);
    virtual ~Widget();

public slots:
    void SetTextBegin ();
    void SetTextDis ();

    void Check1();
    void Check2();
    void Check3();

     void Radio1();
     void Radio2();
     void Radio3();


private:
QPushButton *button1;
QPushButton *button2;
QLabel *lbl;
QCheckBox *flag1;
QCheckBox *flag2;
QCheckBox *flag3;
QRadioButton *radio1;
QRadioButton *radio2;
QRadioButton *radio3;
};


#endif // WIDGET_H
