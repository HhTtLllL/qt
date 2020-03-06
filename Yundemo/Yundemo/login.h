#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
protected:
    //窗口画图 函数  绘图事件函数
    void paintEvent(QPaintEvent* event);
private slots:  //槽函数
    void on_pushButton_4_clicked(); //注册按钮

    void on_pushButton_3_clicked();

    //保存配置文件信息
    void saveWebInfo(QString ip,QString port,QString path);

    //注册信息 ->json
    QByteArray getRegJson(QString user,QString nick,QString pwd, QString phone,QString mail);

    //初始化登录界面的函数  --从配置文件读信息
private:
    Ui::Login *ui;
};

#endif // LOGIN_H
