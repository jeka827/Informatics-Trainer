#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "volumewidget.h"

namespace Ui {
class Menu;
}

class MenuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWidget(QWidget *parent = nullptr);
    ~MenuWidget();


signals:

void start();

private slots:
    void on_Start_clicked();

private:
    Ui::Menu *ui;
    QWidget* taskWidget;
};

#endif // MENU_H
