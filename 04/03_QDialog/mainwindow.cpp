#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //点击新建按钮，弹出一个对话框
    connect(ui->action,&QAction::triggered,[=](){
        //对话框分类
        //模态对话框(不可以对其他窗口进行操作)
        //非模态对话框  (可以对其他窗口进行操作)

//        //模态创建
//        QDialog dlg(this);
//        dlg.exec();

//        //非模态对话框
//        QDialog* dlg2 = new QDialog(this);
//        dlg2->resize(200,100);
//        dlg2->show();
//        //在对话框关闭时,释放堆区的资源
//        dlg2->setAttribute(Qt::WA_DeleteOnClose);
        //错误对话框
        //QMessageBox::critical(this,"critical","错误");

        //消息对话框
       // QMessageBox::information(this,"info","信息");


//        //提问对话框
//        //参数1 :父亲,参数2:标题,参数3:提示内容,参数4:按键类型(Yes |No)还是 Save，Cancel， 参数5：默认关联回车按键
//        if(QMessageBox::Save == QMessageBox::question(this,"ques","提问",QMessageBox::Save | QMessageBox::Cancel,QMessageBox::Cancel))
//            qDebug() << "保存";
//         else
//        {
//            qDebug() << "取消";

//            }

        //警告 对话框
        QMessageBox::warning(this,"Warning","警告");

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
