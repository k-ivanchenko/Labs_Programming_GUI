#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QString>
#include <QIntValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    QLabel *label1;
    QLabel *label2;
    QLineEdit *LineEdit;
    QSpinBox *spin;
    QIntValidator *validator;

public slots:
    void Spin(const QString &text);
    void setMaxim(int i);
    void setTitleName(const QString &text);


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
class MyValidator:QIntValidator{
public:
    MyValidator(QObject *parent=0):QIntValidator(parent){}
    State validate (QString&str, int&pos) const
    {pos=0;
    if(int k % 2 == 0:)return Invalid;
    return Acceptable;
    }

};

#endif // WIDGET_H

