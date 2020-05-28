#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QDebug>
#include <QToolBar>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QTextEdit>
#include <QDockWidget>


Mainmenu::Mainmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mainmenu)
{
    ui->setupUi(this);
    //菜单栏
    QMenuBar * mBar = menuBar();

    //添加菜单
    QMenu *pFile = mBar->addMenu("文件");

    //添加菜单项 添加动作
    QAction *pNew = pFile->addAction("new");

    connect(pNew,&QAction::triggered,
            [=]()
    {
        qDebug() << "新建";

    }
    );

    //添加分割线
    pFile->addSeparator(); //添加分割线

    QAction *pOpen = pFile->addAction("open");

    //工具栏,菜单栏的快捷方式
    QToolBar *toolBar = addToolBar("toolBar");

    //工具栏添加快捷键
    toolBar->addAction(pNew);

    QPushButton *b = new QPushButton(this);
    b->setText("aaa");
    //添加小控件
    toolBar->addWidget(b);

    connect(b,&QPushButton::clicked,[=]()
          {
                b->setText("bbb");

          }
    );

    //状态栏
    QStatusBar * sBar = new QStatusBar();
    QLabel *label = new QLabel(this);

    label->setText("normal");
    sBar->addWidget(label);
    sBar->addWidget(new QLabel("2",this));



    //核心控件
    QTextEdit *textEdit = new QTextEdit(this);
    setCentralWidget(textEdit);

    //浮动窗口
    QDockWidget *dock = new QDockWidget(this);
    addDockWidget(Qt::RightDockWidgetArea,dock);
 //   dock->setWidget(textEdit);

}

Mainmenu::~Mainmenu()
{
    delete ui;
}
