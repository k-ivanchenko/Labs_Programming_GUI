#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QLabel>
#include <QCheckBox>
#include <QWidget>
#include <QVBoxLayout>
#include<QApplication>
#include<QtWidgets>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    QLineEdit* edit;
    QSpinBox* spnbx;
    QLabel *lbl1;
    QLabel *lbl2;


    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
