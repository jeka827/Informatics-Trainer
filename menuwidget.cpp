#include "menuwidget.h"
#include "ui_menu.h"

MenuWidget::MenuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

MenuWidget::~MenuWidget()
{
    delete ui;
}

void MenuWidget::on_Start_clicked()
{
    if(ui->SystemBtn->isChecked()){
        taskWidget = new VolumeWidget();
    }
    emit start();

}
//GET TASKWIDGET
