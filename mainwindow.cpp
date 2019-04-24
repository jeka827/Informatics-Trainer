#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MenuWidget* menu=new MenuWidget;
    connect(menu, SIGNAL(start(QWidget *)),this, SLOT(start(QWidget *)));
    setCentralWidget(menu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start(QWidget *w)
{
    setCentralWidget(w);
}
