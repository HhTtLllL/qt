#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class myWidget : public QWidget
{
    Q_OBJECT  //是一个宏,允许类中使用信号和槽机制

public:
    myWidget(QWidget *parent = 0);
    ~myWidget();
};

#endif // MYWIDGET_H
