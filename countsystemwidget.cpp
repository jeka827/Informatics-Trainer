#include "countsystemwidget.h"
#include "ui_systembtn.h"

CountSystemWidget::CountSystemWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SystemBtn)
{
    ui->setupUi(this);
}

CountSystemWidget::~CountSystemWidget()
{
    delete ui;
}
