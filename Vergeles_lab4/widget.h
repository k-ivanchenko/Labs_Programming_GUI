#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QSpinBox>
#include <QValidator>

class Widget : public QMainWindow
{
    Q_OBJECT
private:
    QLineEdit *edit;
    QSpinBox *spin;
    QLabel *lbl1;
    QLabel *lbl2;
    QIntValidator *valid;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void heading(const QString &v);
    void rightborder(int top);
};
#endif
