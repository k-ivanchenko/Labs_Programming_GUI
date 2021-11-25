#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtWidgets>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE




class Widget : public QWidget
{
    Q_OBJECT

private:
    QLineEdit *edit;
    QSpinBox *spnbx;
    QLabel *lbl1;
    QLabel *lbl2;
    QIntValidator *valor;
    QIntValidator *valor1;
    QString kk;
    int number;
    int k;
    int c;
    QString str;
public slots:
    void setValue(int);
    void setedit(const QString &title);
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
