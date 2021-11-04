#include "pushbtn.h"
#include <QLabel>
#include <QRadioButton>

pushbtn::pushbtn(QWidget *parent)
    : QWidget(parent)
{    
    lbl = new QLabel("", this);

    str = new QString("1 flag unchecked, ");
    str1 = new QString("2 flag unchecked, ");
    str2 = new QString("3 flag unchecked, ");
    str3 = new QString("1 RButton unchecked, ");
    str4 = new QString("2 RButton unchecked, ");
    str5 = new QString("3 RButton unchecked, ");

    box = new QCheckBox("flag 1", this);
    box1 = new QCheckBox("flag 2", this);
    box2 = new QCheckBox("flag 3", this);

    rbtn = new QRadioButton("RadioButton 1", this);
    rbtn1 = new QRadioButton("RadioButton 2", this);
    rbtn2 = new QRadioButton("RadioButton 3", this);

    btn1 = new QPushButton("Set Tristate", this);
    btn2 = new QPushButton("Set Twostate", this);

    lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
    lbl->resize(400, 100);
    lbl->move(25, 50);

    box->move(75, 180);
    box1->move(75, 200);
    box2->move(75, 220);

    rbtn->move(150, 180);
    rbtn1->move(150, 200);
    rbtn2->move(150, 220);

    btn1->move(75, 150);
    btn2->move(150, 150);

    resize(350, 350);
    setWindowTitle("Lab number 3");

    connect(btn1, SIGNAL(clicked()), this, SLOT(click1()));
    connect(btn2, SIGNAL(clicked()), this, SLOT(click2()));

    connect(box, SIGNAL(toggled(bool)), this, SLOT(ReadState(bool)));
    connect(box1, SIGNAL(toggled(bool)), this, SLOT(ReadState1(bool)));
    connect(box2, SIGNAL(toggled(bool)), this, SLOT(ReadState2(bool)));

    connect(box, SIGNAL(stateChanged(int)), this, SLOT(ReadTristate(int)));
    connect(box1, SIGNAL(stateChanged(int)), this, SLOT(ReadTristate1(int)));
    connect(box2, SIGNAL(stateChanged(int)), this, SLOT(ReadTristate2(int)));

    connect(rbtn, SIGNAL(toggled(bool)), this, SLOT(RButtonState(bool)));
    connect(rbtn1, SIGNAL(toggled(bool)), this, SLOT(RButtonState1(bool)));
    connect(rbtn2, SIGNAL(toggled(bool)), this, SLOT(RButtonState2(bool)));

}

void pushbtn::click1()
{
        box->setTristate(true);
        box1->setTristate(true);
        box2->setTristate(true);
}

void pushbtn::click2()
{
    box->setTristate(false);
    box1->setTristate(false);
    box2->setTristate(false);
}

void pushbtn::ReadState(bool state)
{
   switch(state)
   {
        case false:
        {
            *str = "1 flag unchecked, ";
            lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
            break;
    }

        case true:
        {
            *str = "1 flag checked, ";
            lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
            break;
    }
   }
 }

void pushbtn::ReadState1(bool state)
{

    switch(state)
    {
         case false:
         {
             *str1 = "2 flag unchecked, ";
             lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
             break;
     }

         case true:
         {
             *str1 = "2 flag checked, ";
             lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
             break;
     }
    }
}

void pushbtn::ReadState2(bool state)
{
    switch(state)
    {
         case false:
         {
             *str2 = "3 flag unchecked.\n";
             lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
             break;
     }

         case true:
         {
             *str2 = "3 flag checked.\n";
             lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
             break;
     }
    }
}

void pushbtn::RButtonState(bool state)
{
    switch(state)
    {
         case false:
         {
             *str3 = "1 RButton unchecked, ";
             lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
             break;
     }

         case true:
         {
             *str3 = "1 RButton checked, ";
             lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
             break;
     }
    }
}

void pushbtn::RButtonState1(bool state)
{
    switch(state)
    {
         case false:
         {
             *str4 = "2 RButton unchecked, ";
             lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
             break;
     }

         case true:
         {
             *str4 = "2 RButton checked, ";
             lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
             break;
     }
    }
}

void pushbtn::RButtonState2(bool state)
{
    switch(state)
    {
         case false:
         {
             *str5 = "3 RButton unchecked, ";
             lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
             break;
     }

         case true:
         {
             *str5 = "3 RButton checked, ";
             lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
             break;
     }
    }
}

void pushbtn::ReadTristate(int state)
{
   switch(state)
   {
        case Qt::Unchecked:
        {
            *str = "1 flag unchecked, ";
            lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
            break;
    }

        case Qt::PartiallyChecked:
        {
            *str = "1 flag PartiallyChecked, ";
            lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
            break;
    }
       case Qt::Checked:
       {
           *str = "1 flag checked, ";
           lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
           break;
    }
   }
 }

void pushbtn::ReadTristate1(int state)
{
   switch(state)
   {
        case Qt::Unchecked:
        {
            *str1 = "2 flag unchecked, ";
            lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
            break;
    }

        case Qt::PartiallyChecked:
        {
            *str1 = "2 flag PartiallyChecked, ";
            lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
            break;
    }
       case Qt::Checked:
       {
           *str1 = "2 flag checked, ";
           lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
           break;
    }
   }
 }

void pushbtn::ReadTristate2(int state)
{
   switch(state)
   {
        case Qt::Unchecked:
        {
            *str2 = "3 flag unchecked, ";
            lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
            break;
    }

        case Qt::PartiallyChecked:
        {
            *str2 = "3 flag PartiallyChecked, ";
            lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
            break;
    }
       case Qt::Checked:
       {
           *str2 = "3 flag checked, ";
           lbl->setText(*str + *str1 + *str2 + "\n" + *str3 + *str4 + *str5);
           break;
    }
   }
 }

pushbtn::~pushbtn()
{
}
