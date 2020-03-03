#include "login.h"
#include "ui_login.h"
//绘图头文件
#include <QPainter>
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    //去掉边框                                 暂时不清楚 windowFlags  是什么作用
    this->setWindowFlags(Qt::FramelessWindowHint | windowFlags());

    //设置当前窗口所有的字体    字体，大小，加粗， 是否倾斜
    this->setFont(QFont("华文彩云",16,QFont::Bold,false));

    //或者对对应的控件的字体




    //处理信号 titlewidget 信号处理
    connect(ui->title_wg,&Titlewg::closeWindow,[=](){
        //判断当前stackedWidget 显示的页面
        //如果当前窗口为 设置页面，点击关闭 就切换到 登录页面
        if(ui->stackedWidget->currentWidget() == ui->set_page)
        {
            //切换到登录
            ui->stackedWidget->setCurrentWidget(ui->login_page);
            //清空控件数据
        }
        else if(ui->stackedWidget->currentWidget() == ui->reg_page)
        {
            //切换到登录页面
            ui->stackedWidget->setCurrentWidget(ui->login_page);
            //清空控件数据
           // ui->
        }
        else {
            //关闭页面
            this->close();
        }

    });

    connect(ui->title_wg,&Titlewg::showSetWg,[=](){
       ui->stackedWidget->setCurrentWidget(ui->set_page);

    });

}

Login::~Login()
{
    delete ui;
}
//qt窗口添加背景图
//paintEvent 是一个回调函数，给控件设背景时 ，重写这个函数就ok
void Login::paintEvent(QPaintEvent *event)
{
    //给窗口画 背景图
    // p 为绘图设备， 在this 上画图
    QPainter p(this);
    QPixmap pixmap(":/Images/ChMkJlwjWC2IL_xNABSi2nGf5toAAuAJwBcvSoAFKLy959.jpg");
    p.drawPixmap(0,0,this->width(),this->height(),pixmap);
}

