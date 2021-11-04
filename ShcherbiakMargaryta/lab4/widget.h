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
    QSpinBox *spin;
    QLabel *lbl1;
    QLabel *lbl2;
    QIntValidator *val;
public slots:
    void setTitle(const QString &title);
    void setTop(int);
    void setTet(int);
};
#endif // WIDGET_H
