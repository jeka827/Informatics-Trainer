#ifndef SYSTEMNUMBER_H
#define SYSTEMNUMBER_H

#include <QWidget>
#include <QStringList>
#include <QDebug>

namespace Ui {
class Systemnumber;
}

class Systemnumber : public QWidget
{
    Q_OBJECT

public:
    explicit Systemnumber(QWidget *parent = nullptr);
    ~Systemnumber();

private slots:
    void on_next_clicked();

private:
    Ui::Systemnumber *ui;
    QStringList tasks = {
        "Задано число %1 в системе счисления с основанием %2. Перевести данное число в систему счисления с основанием %3.",
        ""
    };
};

#endif // SYSTEMNUMBER_H
