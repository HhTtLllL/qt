#include "clientwidget.h"
#include "ui_clientwidget.h"
#include <QHostAddress>

//构造函数
ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{


    ui->setupUi(this);


    setWindowTitle("客户端");
    tcpSocket = nullptr;

    //分配空间,指定父对象
    tcpSocket = new QTcpSocket(this);

    connect(tcpSocket,&QTcpSocket::connected,[=]()
    {
        ui->textEditRead->setText("成功连接");


    });
    connect(tcpSocket,&QTcpSocket::disconnected,[=]()
    {
        ui->textEditRead->append("断开连接");


    });
    connect(tcpSocket,&QTcpSocket::readyRead,[=]()
    {
        //获取对方发送的内容
        QByteArray  array = tcpSocket->readAll();
        ui->textEditRead->append(array);


    });

}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_buttonConnect_clicked()
{
    //获取服务器IP和端口
    QString ip = ui->lineEditIp->text();
    qint16 port= ui->lineEditPort->text().toInt();

    //主动和服务器建立连接
    tcpSocket->connectToHost(QHostAddress(ip),port);
}

void ClientWidget::on_buttonSend_clicked()
{
    //获取编辑框内容
    QString str = ui->textEditWrite->toPlainText();

    //发送数据
    tcpSocket->write(str.toUtf8().data());
}

void ClientWidget::on_buttonClose_clicked()
{
    //主动和对方断开连接
    tcpSocket->disconnectFromHost();
    tcpSocket->close();

}
