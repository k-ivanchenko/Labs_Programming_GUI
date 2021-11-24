#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    model = new QStringListModel(this);

    lcdNumber = new QLCDNumber(this);
    lcdNumber->move(10, 10);
    lcdNumber->resize(120, 20);

    horizontalSlider = new QSlider(Qt::Orientation::Horizontal, this);
    horizontalSlider->move(10, 40);
    horizontalSlider->resize(120, 20);
    horizontalSlider->setRange(0, 10);

    comboBox = new QComboBox(this);
    comboBox->move(10, 60);
    comboBox->resize(120, 20);
    comboBox->setEditable(true);

    pushButton = new QPushButton("Push me!", this);
    pushButton->move(10, 80);
    pushButton->resize(120, 20);

    listView = new QListView(this);
    listView->move(10, 100);
    listView->resize(120, 200);
    listView->setModel(model);

    MainWindow::resize(140, 310);

    connect(pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(on_horizontalSlider_valueChanged(int)));
    connect(comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboBox_returnPressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    QStringList List = model->stringList();
    for(int i = 0; i < comboBox->count() && i < horizontalSlider->value(); i++)
        List << comboBox->itemText(i);
    model->setStringList(List);
    comboBox->clear();
    lcdNumber->display(listView->model()->rowCount());
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    lcdNumber->display(value);
}

void MainWindow::on_comboBox_returnPressed(){
    comboBox->setCurrentText("");
}
