#include "texteditor.h"

textEditor::textEditor(QWidget *parent): QMainWindow(parent)
{
    lineE = new QLineEdit(this);
    lineE->move(40, 100);
    box1 = new QSpinBox(this);
    box1->move(150, 100);
    box1->setMaximum(10);

    box2 = new QSpinBox(this);
    box2->move(270, 100);
    box2->setValue(10);

    lbl1 = new QLabel("&lineE" ,this );
    lbl1->move(50 , 50);
    lbl1->setBuddy(lineE);

    lbl2 = new QLabel("&glineE" ,this );
    lbl2->move(150 , 50);
    lbl2->setBuddy(box1);

    lbl3 = new QLabel("&hlineE" ,this );
    lbl3->move(250 , 50);
    lbl3->setBuddy(box2);

    ivd = new QIntValidator(1,100,this);
    lineE->setValidator(ivd);
    ivd->setTop(10);
    resize(400, 300);

    connect(box1,SIGNAL(valueChanged(const QString &)), lineE, SLOT(setText(const QString &)));
    connect(box1 , SIGNAL(valueChanged(const QString &)),this,SLOT(setTitle(const QString &)));
    connect(lineE ,SIGNAL(textChanged(const QString &)),this,SLOT(setTitle(const QString &)));
    connect(box2 , SIGNAL(valueChanged(int)) , this , SLOT(setTop(int)));
    connect(lineE , SIGNAL(textChanged(const QString &)) , this , SLOT(setInt(const QString &)));


}
void textEditor::setTop(int a){
    box1->setMaximum(a);
    ivd->setTop(a);
}
void textEditor::setInt( QString a){
    int b = a.toInt();
    box1->setValue(b);

}

void textEditor::setTitle(const QString &title)
{
    setWindowTitle(title);
}


textEditor::~textEditor()
{
}

