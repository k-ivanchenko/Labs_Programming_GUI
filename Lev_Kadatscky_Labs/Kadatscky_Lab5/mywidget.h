#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QLCDNumber>
#include <QComboBox>
#include <QListWidget>
#include <QSlider>
#include <QLineEdit>
#include <QPushButton>
#include <QString>

class MyWidget : public QWidget
{
    Q_OBJECT
    QLCDNumber *lcd1;
    QLCDNumber *lcd2;
    QListWidget *l;
    QComboBox *com;
    QSlider *s1;
    QSlider *s2;
    QLineEdit *text1;
    QLineEdit *text2;
    QPushButton *btn1;
    QPushButton *btn2;


public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();
public slots:
    void Set_list();
    void Set_Combo();
    void delete1();
    void delete2();
    void pos1(int);
    void pos2(int);
};
#endif // MYWIDGET_H
