#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QFile>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QCryptographicHash>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

#if 0
    //创建一个json对象
    QJsonObject obj;
    QJsonObject sub;
    sub.insert("IP",QJsonValue("192.168.1.3"));
    sub.insert("port",QJsonValue("9990"));
    obj.insert("server",QJsonValue(sub));

    //内存中的数据写入文件中
    //需要先将 QJsonobject   转化为 QJsonDocument ，然后将 QJsonDocument 转化为字符串
    QJsonDocument doc(obj);

    //将json对象转为 字符串
    QByteArray data =  doc.toJson();

    //将字符串写入文件中
    QFile file("temp.json");
    file.open(QIODevice::WriteOnly);
    file.write(data);
    file.close();
   #endif
#if 0
    //读json 文件
    QFile file("temp.json");
    file.open(QIODevice::ReadOnly);
    QByteArray data = file.readAll();
    file.close();

    //使用json 文档对象加载json 字符串
    QJsonDocument doc = QJsonDocument::fromJson(data);
    //判断是数组还是对象
    if(doc.isObject())
    {
        QJsonObject obj = doc.object();
        QJsonValue value = obj.value("server");
        if(value.isObject())
        {
               QJsonObject subobj = value.toObject();
               //取值
               QString ip = subobj.value("IP").toString();
               QString port = subobj.value("port").toString();

                qDebug()<< ip << port;
        }
    }
#endif
#if 0
    //需要一个mamager对象，做get，post请求
    //指定this 的目的，当当前窗口释放的时候，mamager 也会被释放
    QNetworkAccessManager* mamager = new QNetworkAccessManager(this);
    //准备工作  --初始化一个QNetworkrequest
    QNetworkRequest res;
    //设置头  --游览器
    res.setHeader(QNetworkRequest::UserAgentHeader,
                  "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/75.0.3770.142 Safari/537.36");
    //设置url   --访问的目录
    res.setUrl(QUrl("http://www.baidu.com:80"));

    QNetworkReply* reply =   mamager->post(res,"");

    //读服务器回写的数据
    connect(reply,&QNetworkReply::readyRead,this,[=](){
        //读数据
        QVariant str =  reply->header(QNetworkRequest::LocationHeader); // 读-头部
        //读取服务器给回发的数据 -- 不包括头，
        QByteArray data = reply->readAll();
        qDebug() << data;
        qDebug() << str.toString();
    });
#endif
#if 0
    //MD5
    QByteArray data = "hello, MD5";
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(data);
    hash.addData("hello,world");

    //计算
    QByteArray arry = hash.result();
    qDebug() << arry;

    QByteArray arry_hex =  arry.toHex();
    qDebug() << arry_hex;

#endif
#if 0
    //另一种转换MD5

    QByteArray arry =  QCryptographicHash::hash("hello,world",QCryptographicHash::Md5).toHex();

    qDebug() << arry;
#endif
    //base64
    QByteArray base = "你好，世界";
    base = base.toBase64();

    qDebug() << base;

    //解码
    base = QByteArray::fromBase64(base);

    qDebug() << base.data();

}

MainWindow::~MainWindow()
{
    delete ui;
}
