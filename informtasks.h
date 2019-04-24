#ifndef INFORMTASKS_H
#define INFORMTASKS_H

#include <QWidget>

namespace Ui {
class Informtasks;
}

class Informtasks : public QWidget
{
    Q_OBJECT

public:
    explicit Informtasks(QWidget *parent = nullptr);
    ~Informtasks();

private:
    Ui::Informtasks *ui;
};

#endif // INFORMTASKS_H
