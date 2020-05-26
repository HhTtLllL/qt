#include "login.h"
#include "ui_login.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QFile>
#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

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
    Q_UNUSED(event);
    //给窗口画 背景图
    // p 为绘图设备， 在this 上画图
    QPainter p(this);
    QPixmap pixmap(":/Images/ChMkJlwjWC2IL_xNABSi2nGf5toAAuAJwBcvSoAFKLy959.jpg");
    p.drawPixmap(0,0,this->width(),this->height(),pixmap);
}



//注册按钮
void Login::on_pushButton_4_clicked()
{
    //取数据->控件的
    QString ip = ui->address->text();
    QString port = ui->port->text();

    //注册
    QString username = ui->username->text();
    QString nickname = ui->nickname->text();
    QString pwd = ui->pwd->text();
    QString cinfirm_pwd = ui->pwdAgain->text();
    QString phone = ui->phone->text();
    QString email = ui->email->text();

    //校验

    //将数据发往数据库,需要直到发给server什么样的数据
    //将用户输入的注册信息转化为 一个 json对象

    QByteArray postData = getRegJson(username,nickname,pwd,phone,email);


    //准备发送http的请求协议
    //需要network 的三个类
    QNetworkAccessManager* manager =new  QNetworkAccessManager(this);
    //http 请求协议头
    QNetworkRequest request;
                                                          //post 提交数据的四中方式之一
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/json");
    //发送字节数
    request.setHeader(QNetworkRequest::ContentLengthHeader,postData.size());
    //发送 url
    //从配置文件中读出来, %1,%2 为占位符
    QString url = QString("http://%1:%2/reg").arg(ip).arg(port);//格式化一个字符串
    //设置url
    request.setUrl(QUrl(url));

    //发送
    QNetworkReply* reply =  manager->post(request,postData);

    //接受server 端返回的数据
    // post 会返回之歌QnetworkReply 对象

    connect(reply,&QNetworkReply::readyRead,[=](){
       //读服务器返回的数据
        //成功 {"code":"001"}
        QByteArray jsonData = reply->readAll();
        //将字符串转化为 json 对象
        QJsonDocument doc = QJsonDocument::fromJson(jsonData);
        //判读这个是不是一个json文档
        if(!doc.isObject())
        {
            //如果不是一个json文档 退出
            return ;
        }

        QJsonObject obj = doc.object();

        QString status = obj.value("code").toString();

        //解析json字符串
        //得到一个 QString status

        if("002" == status)
        {
            //success
            //将当前注册的用户信息填写到登录的数据框中
            ui->user_login->setText(username);
            ui->passwd_login->setText(pwd);
            //当前注册信息清除
            //跳转到登录页面
            ui->stackedWidget->setCurrentWidget(ui->login_page);
        }
        else if("003" == status)
        {
            //用户已存在
            QMessageBox::warning(this,"警告","当前用户存在");
        }
        else {
            //失败
            QMessageBox::critical(this,"失败","注册失败");
        }
    });

}
//服务器设置
void Login::on_pushButton_3_clicked()
{
    //首先获取控件的数据
    QString ip = ui->address->text();
    QString port = ui->port->text();

    //数据的校验，使用正则表达式
    QRegExp exp(IP_REG);
    //exactMatch   精确匹配
    if(!exp.exactMatch(ip))
    {
        //输入IP 不正确
        QMessageBox::warning(this,"警告","IP格式不正确");
        ui->address->clear();
        //控件　设置焦点
        ui->address->setFocus();

        return ;
    }

    //端口校验
    exp.setPattern(PORT_REG);
    if(!exp.exactMatch(port))
    {
        //输入端口不正确
        QMessageBox::warning(this,"警告","PORT 格式不正确");
        ui->address->clear();

        return ;
    }

    //保存起来　　－－保存到配置文件





}

//保存到配置文件
//common.h  --writewebinfo
void Login::saveWebInfo(QString ip, QString port, QString path)
{
    //先读文件 ,读path
    QFile file(path);
    //判断文件是否存在
    //openread 失败 就不存在
    bool bl  = file.open(QFile::ReadOnly);
    if(bl == false)
    {
        //文件不存在

        //写一个新的文件
        return ;
    }

    //文件存在,将文件中的数据存储在字符中,用来在下面转化为 JSON对象
    QByteArray data = file.readAll();

    //先读原来的配置文件
    //将Json文档转化为 Json 对象
    QJsonDocument doc = QJsonDocument::fromJson(data);

    if(!doc.isObject()) //先判断这个文档是不是一个json对象
    {
        return ;
    }
    //字符串转json
    QJsonObject obj = doc.object();
    //取出login 信息
    QJsonObject loginobj = obj.value("login").toObject();
    //取子对象的数据
    QJsonValue pwdvalue = loginobj.value("pwd");
    QJsonValue remembervalue = loginobj.value("remember");
    QJsonValue uservalue = loginobj.value("user");
    //pwd remember user

    QMap<QString,QVariant> logininfo;
    logininfo.insert("pwd",QVariant(pwdvalue));
    logininfo.insert("remember",QVariant(remembervalue));
    logininfo.insert("user",QVariant(uservalue));

    //取出图片路径信息
    QJsonObject pathobj = obj.value("type_path").toObject();
    QJsonValue pathvalue = pathobj.value("path");
    QMap<QString,QVariant> pathinfo;
    pathinfo.insert("path",QVariant(pathvalue));


    //存储web信息
    QMap<QString,QVariant> webinfo;
    webinfo.insert("ip",QVariant(ip));
    webinfo.insert("port",QVariant(port));


    //设置一个大的map
    QMap<QString,QVariant> info;
    info.insert("login",logininfo);
    info.insert("type_path",pathinfo);
    info.insert("web_server",webinfo);

    //将map 打包成 json
    doc = QJsonDocument::fromVariant(info);

    //json对象 转化为字符串
    data = doc.toJson();

    //写文件


}

QByteArray Login::getRegJson(QString username, QString nickname,QString pwd, QString phone, QString mail)
{
    //将这些数据都插入json对象中,然后将json对象转化为 json文档,然后在tojson 变成 QByteArray
    QJsonObject jsondata;
    jsondata.insert("userName",username);
    jsondata.insert("nickName",nickname);
    jsondata.insert("firstPwd",pwd);
    jsondata.insert("phone",phone);
    jsondata.insert("email",mail);

    //将map打包为json

    QJsonDocument doc = QJsonDocument(jsondata);

    QByteArray data = doc.toJson();

    return data;

}
