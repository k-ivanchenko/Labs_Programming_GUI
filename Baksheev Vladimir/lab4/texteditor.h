#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QValidator>
#include <QIntValidator>
#include <QString>





class textEditor : public QMainWindow
{
    Q_OBJECT

private:
    QLineEdit *lineE;
    QSpinBox *box1;
    QSpinBox *box2;
    QLabel  *lbl1;
    QLabel  *lbl2;
    QLabel  *lbl3;
    QIntValidator *ivd;
 public:
    textEditor(QWidget *parent = nullptr);
    ~textEditor();
public slots:
    void setTitle (const QString &title);
    void setTop (int a);
    void setInt(QString a);

};
#endif // TEXTEDITOR_H
