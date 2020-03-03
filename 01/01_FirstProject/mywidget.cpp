#include "mywidget.h"
#include <qpushbutton.h>
#include "mypushbutton.h"
#include <QDebug>

//注意事项:
//命名规范::
//类名:首字母大写,单词和单词之间首字母大写
//函数名,变量名称  --首字母小写,单词和单词之间首字母大写
//快捷键
//注释: ctrl + /
//运行 ctrl + r
//编译:  ctrl + b
//查找  ctrl + f
//整行移动 ctrl + shift + 上下箭头
//帮助文档 F1  或者 左侧按钮
//自动对齐  ctrl + i
//同名之间的.h 和 .cpp切换, f4
//
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    //创建一个按钮
    QPushButton* btn = new  QPushButton;
  //  btn->show();  //show 以顶层方式弹出窗口控件
    //让对象依赖在myWidget 窗口中
    //将按钮对象设置到父窗口中
    btn->setParent(this);

    //显示文本
    //btn->setText("第一个按钮");

    QPushButton* btn2 = new QPushButton("第二个按钮",this);
    //移动btn2 按钮
    btn2->move(100,100);
    //重置按钮的大小
    btn2->resize(100,100);
    //重置窗口的大小
    resize(300,200);
    //设置固定的窗口大小
    setFixedSize(600,400);

    //设置窗口标题
    setWindowTitle("第一个窗口");


    //创建一个自己的按钮对象
    MyPushButton* mbtn = new MyPushButton;
    mbtn->setText("我自己的按钮");
    mbtn->move(50,50);
    mbtn->setParent(this);  //设置到对象树中,在窗口被释放的时候,一层一层自动释放里面的控件



    //点击按钮,关闭窗口
    //connect( 信号的发送者,发送的具体信号,信号的接受者,信号的处理(槽函数) )
    //信号槽的优点,:松散耦合. 信号发送端和 接收端 本身是没有什么关联的,通过connect 连接将两端耦合在一起.
    connect(mbtn,&MyPushButton::clicked,this,&QWidget::close);



}

myWidget::~myWidget()
{
    qDebug() << "mywidget的析构调用";
    //虽然输出是显示出父类的 ddebug 然后在输出儿子的消息,但是析构顺序还是先析构子类,在析构父类
    //析构父类的时候,执行完后,但还没有析构,就开始找这个类是否有儿子,如果有进入儿子继续执行,直到没儿子之后,开始往回析构
}
