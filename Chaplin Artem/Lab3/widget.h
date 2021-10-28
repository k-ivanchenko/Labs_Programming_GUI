#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QCheckBox>
#include <QRadioButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    QPushButton *button1;
    QPushButton *button2;
    QLabel *label1;
    QCheckBox *flag1;
    QCheckBox *flag2;
    QCheckBox *flag3;
    QRadioButton *rdbt1;
    QRadioButton *rdbt2;
    QRadioButton *rdbt3;

public slots:
    void RButton1();
    void RButton2();
    void RButton3();
    void CBox1();
    void CBox2();
    void CBox3();
    void Enabled();
    void Disabled();
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
