#include "widget.h"
#include<QtWidgets>
Widget::Widget(QWidget *parent)
    : QWidget(parent)

{


    lbl = new QLabel("Нажмите кнопку", this);
    lbl->move(100, 10);

   // QString S1 = edit->text();
    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    btn0 = new QPushButton("0", this);
    btn0->move(10,10);
    btn1 = new QPushButton("1", this);
    btn1->move(10,40);
    btn2 = new QPushButton("2", this);
    btn2->move(10,70);
    btn3 = new QPushButton("3", this);
    btn3->move(10,100);
    btn4 = new QPushButton("4", this);
    btn4->move(10,130);
    btn5 = new QPushButton("5", this);
    btn5->move(10,160);
    btn6 = new QPushButton("6", this);
    btn6->move(10,190);
    btn7 = new QPushButton("7", this);
    btn7->move(10,220);
    btn8 = new QPushButton("8", this);
    btn8->move(10,250);
    btn9 = new QPushButton("9", this);
    btn9->move(10,280);
    edit = new QLineEdit(this);
     edit->move(100,40);
     btnClear = new QPushButton("Clear", this);
    btnClear->move(10,310);
    chbx = new QCheckBox("Включить/Выключить", this);
    chbx->move(10,340);
    chbx -> setChecked(true);
    pvbxLayout ->addWidget(btn1);
    pvbxLayout ->addWidget(btn2);
    pvbxLayout ->addWidget(btn3);
    pvbxLayout ->addWidget(btn4);
    pvbxLayout ->addWidget(btn5);
    pvbxLayout ->addWidget(btn6);
    pvbxLayout ->addWidget(btn7);
    pvbxLayout ->addWidget(btn8);
    pvbxLayout ->addWidget(btn9);
    pvbxLayout ->addWidget(btn0);
    connect(btn0, SIGNAL(clicked()), this, SLOT(change0()));
    connect(btn1, SIGNAL(clicked()), this, SLOT(change1()));
    connect(btn2, SIGNAL(clicked()), this, SLOT(change2()));
    connect(btn3, SIGNAL(clicked()), this, SLOT(change3()));
    connect(btn4, SIGNAL(clicked()), this, SLOT(change4()));
    connect(btn5, SIGNAL(clicked()), this, SLOT(change5()));
    connect(btn6, SIGNAL(clicked()), this, SLOT(change6()));
    connect(btn7, SIGNAL(clicked()), this, SLOT(change7()));
    connect(btn8, SIGNAL(clicked()), this, SLOT(change8()));
    connect(btn9, SIGNAL(clicked()), this, SLOT(change9()));
    connect(btnClear, SIGNAL(clicked()), this, SLOT(changeClear()));
    connect(chbx,SIGNAL(stateChanged(int)),this,SLOT(chbx_isChecked()));
    connect(edit, SIGNAL(textChanged(const QString &)),this, SLOT(setTitle(const QString &)));



}

Widget::~Widget()
{




}
