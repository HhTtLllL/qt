#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>

//自定义的信号和槽
//Tearcher 老师类
//Student   学生类
//下课后,老师会触发一个信号,饿了,学生相应信号,请客吃饭
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建老师对象
    //这里加个this 是指定一个父亲,加入到对象树中
    this->zt = new Teacher(this);
    //创建学生对象
    this->st = new Student(this);

    //无参调用
//    //连接信号和槽
//    connect(zt,&Teacher::hungry,st,&Student::treat);
//    //调用下课函数
//    classIsOver();

    //连接带参数的 信号和槽
    //指针 ->地址
    //函数指针 -> 函数地址

    void(Teacher:: *teacherSignal)(QString) = &Teacher::hungry;
    void(Student:: *studentSlot)(QString) = &Student::treat;

    connect(zt,teacherSignal,st,studentSlot);

    classIsOver();

    //点击一个新课的按钮,再触发下课
      QPushButton* btn = new QPushButton("下课",this);
       //重置窗口方法
      this->resize(600,400);

      //点击按钮,触发下课
      //clicked 点击操作
      //connect(btn,&QPushButton::clicked,this,&Widget::classIsOver);


      //无参信号和槽
      void(Teacher:: *teacherSignal2)(void) = &Teacher::hungry;   //信号
      void(Student:: *studentSlot2)(void) = &Student::treat;    //槽
   //   connect(zt,teacherSignal2,st,studentSlot2);

      //信号连接信号
      connect(btn,&QPushButton::clicked,zt,teacherSignal2);

      //断开信号
      //disconnect(zt,teacherSignal2,st,studentSlot2);

      //拓展
      //1.信号是可以连接信号
      //2.一个信号可以连接多个槽函数
      //3.多个信号可以连接同一个槽函数
      //4.信号和槽函数的参数 必须一一对应
      //5.信号和槽的参数的个数  是不是要一直??信号的参数一定多于槽函数,但是参数的类型对应要一直




      //Qt4版本以前的信号和槽连接方式
      //利用qt4信号槽连接无参版本
      //Qt4 版本底层SINGAL("hungry")  SLOT("treat")
      //就是将 函数转化为字符串
      connect(zt,SIGNAL(hungry()),st,SLOT(treat()));
      //Qt4 版本的有点,参数直观
      // 缺点:类型不做检测
      //Qt5 以上支持Qt4版本写法,反之不支持

//      QPushButton* btn2 = new QPushButton;


//      [btn](){
//          btn->setText("aa");
//          //btn2 看不到,不在lambda 的范围内
//      //    btn2->setText("bb");
//      }();

      QPushButton* mybtn = new QPushButton(this);
      QPushButton* mybtn2 = new QPushButton(this);
      mybtn2->move(100,100);
      int m = 10;


//      // mutable关键字可修改标识符 ,用于修饰传递的变量,修改时拷贝,而不是本体
//      connect(mybtn,&QPushButton::clicked,this,[m] () mutable { m = 100 + 10; qDebug() << m; });
//      connect(mybtn2,&QPushButton::clicked,this,[=](){ qDebug() << m; });
//      qDebug() << m ;

//      //->int  代表返回值为 int类型
//      int ret = []()->int{ return 1000; } ();
//      qDebug() << ret ;

      //利用 lambda 表达式 实现点击按钮 ,关闭窗口
      QPushButton* btn2 = new QPushButton(this);
      btn2->setText("关闭");
      btn2->move(100,100);
     // btn2->setParent(this);
      connect(btn2,&QPushButton::clicked,this,[=](){
         //this->close();
         emit zt->hungry("");
         btn2->setText("aaa");
      });


        //lambda 表达式最常见  [=](){}







}

void Widget::classIsOver()
{
    //下课函数,调用后触发老师饿了的信号
    emit zt->hungry();
    emit zt->hungry("宫保鸡丁");
}

Widget::~Widget()
{
    delete ui;
}
