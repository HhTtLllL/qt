/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <titlewg.h>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    Titlewg *title_wg;
    QStackedWidget *stackedWidget;
    QWidget *login_page;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *user_login;
    QLineEdit *passwd_login;
    QLabel *label_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *reg_page;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_9;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *nickname;
    QLabel *label_10;
    QLineEdit *pwd;
    QLabel *label_11;
    QLineEdit *pwdAgain;
    QLabel *label_12;
    QLineEdit *phone;
    QLabel *label_13;
    QLineEdit *email;
    QLineEdit *username;
    QPushButton *pushButton_4;
    QWidget *set_page;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_7;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *address;
    QLabel *label_6;
    QLineEdit *port;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(795, 584);
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        title_wg = new Titlewg(Login);
        title_wg->setObjectName(QStringLiteral("title_wg"));

        verticalLayout->addWidget(title_wg);

        stackedWidget = new QStackedWidget(Login);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        login_page = new QWidget();
        login_page->setObjectName(QStringLiteral("login_page"));
        widget = new QWidget(login_page);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(230, 59, 341, 391));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        user_login = new QLineEdit(widget_2);
        user_login->setObjectName(QStringLiteral("user_login"));

        gridLayout->addWidget(user_login, 0, 1, 1, 1);

        passwd_login = new QLineEdit(widget_2);
        passwd_login->setObjectName(QStringLiteral("passwd_login"));

        gridLayout->addWidget(passwd_login, 1, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox = new QCheckBox(widget_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setStyleSheet(QStringLiteral("color: rgb(114, 159, 207);"));

        horizontalLayout_2->addWidget(checkBox);

        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("color: rgb(114, 159, 207);"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(400, 200));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_4);

        stackedWidget->addWidget(login_page);
        reg_page = new QWidget();
        reg_page->setObjectName(QStringLiteral("reg_page"));
        widget_8 = new QWidget(reg_page);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(220, 40, 321, 41));
        horizontalLayout_5 = new QHBoxLayout(widget_8);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(113, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_7 = new QLabel(widget_8);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        horizontalSpacer_8 = new QSpacerItem(112, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        widget_9 = new QWidget(reg_page);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setGeometry(QRect(190, 160, 371, 198));
        gridLayout_3 = new QGridLayout(widget_9);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_8 = new QLabel(widget_9);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(widget_9);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        nickname = new QLineEdit(widget_9);
        nickname->setObjectName(QStringLiteral("nickname"));

        gridLayout_3->addWidget(nickname, 1, 1, 1, 2);

        label_10 = new QLabel(widget_9);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        pwd = new QLineEdit(widget_9);
        pwd->setObjectName(QStringLiteral("pwd"));

        gridLayout_3->addWidget(pwd, 2, 1, 1, 2);

        label_11 = new QLabel(widget_9);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 3, 0, 1, 2);

        pwdAgain = new QLineEdit(widget_9);
        pwdAgain->setObjectName(QStringLiteral("pwdAgain"));

        gridLayout_3->addWidget(pwdAgain, 3, 2, 1, 1);

        label_12 = new QLabel(widget_9);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 4, 0, 1, 1);

        phone = new QLineEdit(widget_9);
        phone->setObjectName(QStringLiteral("phone"));

        gridLayout_3->addWidget(phone, 4, 2, 1, 1);

        label_13 = new QLabel(widget_9);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 5, 0, 1, 1);

        email = new QLineEdit(widget_9);
        email->setObjectName(QStringLiteral("email"));

        gridLayout_3->addWidget(email, 5, 1, 1, 2);

        username = new QLineEdit(widget_9);
        username->setObjectName(QStringLiteral("username"));

        gridLayout_3->addWidget(username, 0, 1, 1, 2);

        pushButton_4 = new QPushButton(reg_page);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 450, 80, 25));
        stackedWidget->addWidget(reg_page);
        set_page = new QWidget();
        set_page->setObjectName(QStringLiteral("set_page"));
        widget_5 = new QWidget(set_page);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(260, 60, 191, 41));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        widget_6 = new QWidget(set_page);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(190, 210, 327, 92));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        gridLayout_2 = new QGridLayout(widget_7);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_5 = new QLabel(widget_7);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        address = new QLineEdit(widget_7);
        address->setObjectName(QStringLiteral("address"));

        gridLayout_2->addWidget(address, 0, 1, 1, 1);

        label_6 = new QLabel(widget_7);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        port = new QLineEdit(widget_7);
        port->setObjectName(QStringLiteral("port"));

        gridLayout_2->addWidget(port, 1, 1, 1, 1);


        horizontalLayout_4->addWidget(widget_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        pushButton_3 = new QPushButton(set_page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 410, 121, 31));
        stackedWidget->addWidget(set_page);

        verticalLayout->addWidget(stackedWidget);

        QWidget::setTabOrder(user_login, passwd_login);
        QWidget::setTabOrder(passwd_login, checkBox);
        QWidget::setTabOrder(checkBox, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, username);
        QWidget::setTabOrder(username, nickname);
        QWidget::setTabOrder(nickname, pwd);
        QWidget::setTabOrder(pwd, pwdAgain);
        QWidget::setTabOrder(pwdAgain, phone);
        QWidget::setTabOrder(phone, email);
        QWidget::setTabOrder(email, pushButton_4);
        QWidget::setTabOrder(pushButton_4, address);
        QWidget::setTabOrder(address, port);
        QWidget::setTabOrder(port, pushButton_3);

        retranslateUi(Login);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", 0));
        label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\347\231\273\345\275\225", 0));
        label_2->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215:", 0));
        label_3->setText(QApplication::translate("Login", "\345\257\206\347\240\201:", 0));
        checkBox->setText(QApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        pushButton->setText(QApplication::translate("Login", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\214\351\251\254\344\270\212\346\263\250\345\206\214", 0));
        pushButton_2->setText(QApplication::translate("Login", "\347\231\273\345\275\225", 0));
        label_7->setText(QApplication::translate("Login", "\347\224\250\346\210\267\346\263\250\345\206\214", 0));
        label_8->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215:", 0));
        label_9->setText(QApplication::translate("Login", "\346\230\265\347\247\260:", 0));
        label_10->setText(QApplication::translate("Login", "\345\257\206\347\240\201:", 0));
        label_11->setText(QApplication::translate("Login", "\347\241\256\350\256\244\345\257\206\347\240\201:", 0));
        label_12->setText(QApplication::translate("Login", "\347\224\265\350\257\235:", 0));
        label_13->setText(QApplication::translate("Login", "\351\202\256\347\256\261:", 0));
        pushButton_4->setText(QApplication::translate("Login", "\346\263\250\345\206\214", 0));
        label_4->setText(QApplication::translate("Login", "\346\234\215\345\212\241\345\231\250\350\256\276\347\275\256", 0));
        label_5->setText(QApplication::translate("Login", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200:", 0));
        label_6->setText(QApplication::translate("Login", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243:", 0));
        pushButton_3->setText(QApplication::translate("Login", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
