#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->action->setIcon(QIcon("/home/tt/桌面/Live2D.png"));

    //使用添加Qt资源 ": + 前缀名 + 文件名"
    ui->action->setIcon((QIcon(":/Image/Live2D.png")));
    ui->actionnew->setIcon((QIcon(":/Image/Live2D.png")));
}

MainWindow::~MainWindow()
{
    delete ui;
}
