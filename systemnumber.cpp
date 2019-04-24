#include "systemnumber.h"
#include "ui_systemnumber.h"

Systemnumber::Systemnumber(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Systemnumber)
{
    ui->setupUi(this);
    on_next_clicked();



}

Systemnumber::~Systemnumber()
{
    delete ui;
}

void Systemnumber::on_next_clicked()
{
    qDebug() << tasks.size();
    // rand() % tasks.size()

    auto t = tasks.takeAt(0);
    ui->task->setText(t);
}
