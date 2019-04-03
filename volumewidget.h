#ifndef TASKSBTN_H
#define TASKSBTN_H

#include <QWidget>

namespace Ui {
class TasksBtn;
}

class VolumeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VolumeWidget(QWidget *parent = nullptr);
    ~VolumeWidget();

private:
    Ui::TasksBtn *ui;
};

#endif // TASKSBTN_H
