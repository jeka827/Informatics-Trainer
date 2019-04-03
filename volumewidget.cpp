#include "volumewidget.h"
#include "ui_tasksbtn.h"

VolumeWidget::VolumeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TasksBtn)
{
    ui->setupUi(this);
}

VolumeWidget::~VolumeWidget()
{
    delete ui;
}
