#include "student.h"
#include <QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}
void Student::treat()
{
    qDebug() << "请老师吃饭";
}

void Student::treat(QString foodName)
{
    //qt 输出 char* 类型的字符串 不加引号
    //将QString 转化为 char* 类型
    //先转成 QByteArray 再转 char *
    //转成 QByteArray    .toUtf8 方法
    //转成 char*    .data()  方法
    qDebug() << "请老师吃饭,老师要吃:" << foodName.toUtf8().data();
}
