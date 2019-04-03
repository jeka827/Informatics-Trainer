#ifndef SYSTEMBTN_H
#define SYSTEMBTN_H

#include <QWidget>

namespace Ui {
class SystemBtn;
}

class CountSystemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CountSystemWidget(QWidget *parent = nullptr);
    ~CountSystemWidget();

private:
    Ui::SystemBtn *ui;
};

#endif // SYSTEMBTN_H
