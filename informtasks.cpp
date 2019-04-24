#include "informtasks.h"
#include "ui_informtasks.h"

Informtasks::Informtasks(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Informtasks)
{
    ui->setupUi(this);
}

Informtasks::~Informtasks()
{
    delete ui;
}
