#include "widget.h"
#include<QApplication>
#include<QtWidgets>









Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
edit = new QLineEdit(this);
edit->move(10,10);
spnbx = new QSpinBox(this);
spnbx->move(10,40);
lbl1 = new QLabel("Надпись 1", this);
lbl1->move(10,70);
lbl2 = new QLabel("Надпись 2", this);
lbl2->move(10,100);
str = edit->text();
k = str.toInt();
class MyValidator: public QValidator
{
public:
    MyValidator(QObject * parent=0):QValidator
                                    (parent){}
    State validate (QString &str1,int &pos)const
    {
        int l = str1.toInt();
        if (l % 2 == false) return Invalid;
        return Acceptable;
    }
};

MyValidator *validator = new MyValidator(edit);

edit->setValidator(validator);
valor = new QIntValidator (0,10000,this);
edit ->setValidator(valor);
connect(spnbx, qOverload<int>(&QSpinBox::valueChanged),lbl2, qOverload<int>(&QLabel::setNum));
connect(spnbx,SIGNAL(valueChanged(int)),this,SLOT(setValue(int)));
connect(edit,SIGNAL(textChanged(QString)),this,SLOT(setedit(QString)));
}



void Widget :: setValue(int number)
{
    spnbx->setSingleStep(2);
    valor->setTop(number);
    edit->setValidator(valor);
    c = spnbx->value();
    if(number % 2 == false)
       {
           int v = number - 1;
           spnbx->setValue(v);

       }

    if(k > c)
    {
            edit->setText(QString::number(c));
            lbl1->setText(QString::number(c));
    }

    class MyValidator2: public QValidator
    {
    public:
        MyValidator2(QObject * parent=0):QValidator
                                        (parent){}
        State validate (QString &str3,int &ha)const
        {
            int l = str3.toInt();
            if (l % 2 == false) return Invalid;
            return Acceptable;
        }
    };

}



void Widget :: setedit(const QString &title)
{


     lbl2->setText(str);
    lbl1->setText(title);
    setWindowTitle(title);


}


Widget::~Widget()
{

}

