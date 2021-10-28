#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QCheckBox>
#include <QWidget>
#include <QVBoxLayout>
#include<QApplication>
#include<QtWidgets>
class Widget : public QWidget
{
 Q_OBJECT
public:
    QPushButton *btn0;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btnClear;
    QLabel *lbl;
    QLabel *hlbl;
    QCheckBox *chbx;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void change0()
    {
        lbl->setText("0");
    }
    void change1()
    {
        lbl->setText("1");
    }
    void change2()
    {
        lbl->setText("2");
    }
    void change3()
    {
        lbl->setText("3");
    }
    void change4()
    {
        lbl->setText("4");
    }
    void change5()
    {
        lbl->setText("5");
    }
    void change6()
    {
        lbl->setText("6");
    }
    void change7()
    {
        lbl->setText("7");
    }
    void change8()
    {
        lbl->setText("8");
    }
    void change9()
    {
        lbl->setText("9");
    }
    void changeClear()
    {
        hlbl = lbl;
        //lbl->setText(" ");


    }
    void chbx_isChecked()
    {
        lbl->setText(" ");
        chbx->setChecked(false);
        btn0->setEnabled(false);
        btn1->setEnabled(false);
        btn2->setEnabled(false);
        btn3->setEnabled(false);
        btn4->setEnabled(false);
        btn5->setEnabled(false);
        btn6->setEnabled(false);
        btn7->setEnabled(false);
        btn8->setEnabled(false);
        btn9->setEnabled(false);
        btnClear->setEnabled(false);
        connect(chbx,SIGNAL(stateChanged(int)),this,SLOT(chbx_isChex()));

    }
   void chbx_isChex()
    {
        chbx->setChecked(true);
        lbl->setText("Нажмите кнопку");
        btn0->setEnabled(true);
        btn1->setEnabled(true);
        btn2->setEnabled(true);
        btn3->setEnabled(true);
        btn4->setEnabled(true);
        btn5->setEnabled(true);
        btn6->setEnabled(true);
        btn7->setEnabled(true);
        btn8->setEnabled(true);
        btn9->setEnabled(true);
        btnClear->setEnabled(true);
        connect(chbx,SIGNAL(stateChanged(int)),this,SLOT(chbx_isChecked()));
    }
};
#endif // WIDGET_H
