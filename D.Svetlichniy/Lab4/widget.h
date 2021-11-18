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
    QSpinBox *box;
    QLabel *lbl1;
    QLabel *lbl2;
    QIntValidator *valor;

public slots:
    void setbox(int);
    void setedit(const QString &title);
};
#endif // WIDGET_H
