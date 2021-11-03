#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>
#include <QCheckBox>
#include <QLabel>
#include <QString>

class myWidget : public QMainWindow
{
    Q_OBJECT
private:
    QPushButton *btn1;
    QPushButton *btn2;
    QLabel *lbl;
    QCheckBox *flag1;
    QCheckBox *flag2;
    QCheckBox *flag3;
    QRadioButton *radio1;
    QRadioButton *radio2;
    QRadioButton *radio3;
public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();


public slots:
    void SetTextEn ();
    void SetTextDis ();

    void Check1();
    void Check2();
    void Check3();

     void Radio1();
     void Radio2();
     void Radio3();



};
#endif // MYWIDGET_H
