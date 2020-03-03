#include "titlewg.h"
#include "ui_titlewg.h"
#include <QMouseEvent>
Titlewg::Titlewg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Titlewg)
{
    ui->setupUi(this);

    //logo图片
    ui->logo->setPixmap(QPixmap(":/Images/Live2D.png").scaled(40,40));

    //改变字体
    ui->wgtitle->setStyleSheet("color:rgb(255,255,255)");

    m_parent = parent;


    //按钮功能的实现
    //ui->set 信号的发送者，就是顶部的设置按钮
    // this 为信号的接受者
    //设置
    connect(ui->set,&QToolButton::clicked,this,[=](){
        //发送自定义信号
        emit showSetWg();

    });

    //最小化
    connect(ui->min,&QToolButton::clicked,this,[=](){

        m_parent->showMinimized();
    });

    //关闭
    connect(ui->close,&QToolButton::clicked,this,[=](){
        emit closeWindow();

    });

}

Titlewg::~Titlewg()
{
    delete ui;
}

void Titlewg::mouseMoveEvent(QMouseEvent *event)
{
    //只允许左键拖动
    //button  处理的是单击事件
    //buttons 处理的是持续的事件
    //如果是左键触发的事件，event->buttons 就有对应的键值
    if(event->buttons() & Qt::LeftButton)
    {
        //窗口跟随鼠标移动
       m_parent->move(event->globalPos() - m_pt);
    }
}

void Titlewg::mousePressEvent(QMouseEvent *ev)
{
    //如果鼠标左键按下
    if(ev->button() == Qt::LeftButton)
    {
        //求差值 = 鼠标当前位置 -窗口左上角点
        m_pt = ev->globalPos() - m_parent->geometry().topLeft();
    }
}
