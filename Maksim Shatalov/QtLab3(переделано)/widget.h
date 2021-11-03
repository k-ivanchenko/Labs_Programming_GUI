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
    int a,k,c;
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
    QLineEdit* edit;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void change0()
    {
        QString S1 = edit->text();
        a = S1.toInt();
        k = 0;
        c = k + a;
        lbl->setText(QString::number(c));
    }
    void change1()
    {
        QString S1 = edit->text();
        a = S1.toInt();
         k = 1;
         c = k + a;
         lbl->setText(QString::number(c));
    }
    void change2()
    {
        QString S1 = edit->text();
        a = S1.toInt();
         k = 2;
         c = k + a;
         lbl->setText(QString::number(c));
    }
    void change3()
    {

        QString S1 = edit->text();
        a = S1.toInt();
         k = 3;
         c = k + a;
         lbl->setText(QString::number(c));
    }
    void change4()
    {
        QString S1 = edit->text();
        a = S1.toInt();
         k = 4;
         c = k + a;
         lbl->setText(QString::number(c));
    }
    void change5()
    {
        QString S1 = edit->text();
        a = S1.toInt();
         k = 5;
         c = k + a;
         lbl->setText(QString::number(c));
    }
    void change6()
    {
        QString S1 = edit->text();
        a = S1.toInt();
         k = 6;
         c = k + a;
         lbl->setText(QString::number(c));
    }
    void change7()
    {
        QString S1 = edit->text();
        a = S1.toInt();
         k = 7;
         c = k + a;
         lbl->setText(QString::number(c));
    }
    void change8()
    {
        QString S1 = edit->text();
        a = S1.toInt();
         k = 8;
         c = k + a;
         lbl->setText(QString::number(c));
    }
    void change9()
    {
        QString S1 = edit->text();
        a = S1.toInt();
        k = 9;
        c = k + a;
         lbl->setText(QString::number(c));
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
        edit->setEnabled(false);
        btnClear->setEnabled(false);
        this->setWindowTitle("");
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
        edit->setEnabled(true);
        setWindowTitle(QString::number(c));
        connect(chbx,SIGNAL(stateChanged(int)),this,SLOT(chbx_isChecked()));
    }
    void changeClear()
    {
         setWindowTitle(QString::number(c));
         lbl->setText("");
    }

};
#endif // WIDGET_H
