#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QLineEdit>
#include <QIntValidator>
#include <QString>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();



private:
    QLineEdit *edit;
    QSpinBox *spin1;
    QSpinBox *spin2;
    QLabel *lbl1;
    QLabel *lbl2;
    QLabel *lbl3;
    QIntValidator *val;

public slots:
    void setTitle(const QString &title);
    void setText(int);
    void setText2(int);
    void setText3(int);
};
#endif // WIDGET_H
