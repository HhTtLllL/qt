/********************************************************************************
** Form generated from reading UI file 'titlewg.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEWG_H
#define UI_TITLEWG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Titlewg
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QLabel *wgtitle;
    QSpacerItem *horizontalSpacer;
    QToolButton *set;
    QToolButton *min;
    QToolButton *close;

    void setupUi(QWidget *Titlewg)
    {
        if (Titlewg->objectName().isEmpty())
            Titlewg->setObjectName(QStringLiteral("Titlewg"));
        Titlewg->resize(985, 121);
        horizontalLayout = new QHBoxLayout(Titlewg);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        logo = new QLabel(Titlewg);
        logo->setObjectName(QStringLiteral("logo"));

        horizontalLayout->addWidget(logo);

        wgtitle = new QLabel(Titlewg);
        wgtitle->setObjectName(QStringLiteral("wgtitle"));

        horizontalLayout->addWidget(wgtitle);

        horizontalSpacer = new QSpacerItem(777, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        set = new QToolButton(Titlewg);
        set->setObjectName(QStringLiteral("set"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/login_setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        set->setIcon(icon);
        set->setIconSize(QSize(32, 32));
        set->setAutoRaise(true);

        horizontalLayout->addWidget(set);

        min = new QToolButton(Titlewg);
        min->setObjectName(QStringLiteral("min"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/login_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        min->setIcon(icon1);
        min->setIconSize(QSize(32, 32));
        min->setAutoRaise(true);

        horizontalLayout->addWidget(min);

        close = new QToolButton(Titlewg);
        close->setObjectName(QStringLiteral("close"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/login_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon2);
        close->setIconSize(QSize(32, 32));
        close->setAutoRaise(true);

        horizontalLayout->addWidget(close);


        retranslateUi(Titlewg);

        QMetaObject::connectSlotsByName(Titlewg);
    } // setupUi

    void retranslateUi(QWidget *Titlewg)
    {
        Titlewg->setWindowTitle(QApplication::translate("Titlewg", "Form", 0));
        logo->setText(QString());
        wgtitle->setText(QApplication::translate("Titlewg", "\344\272\221\347\233\230", 0));
        set->setText(QApplication::translate("Titlewg", "...", 0));
        min->setText(QApplication::translate("Titlewg", "...", 0));
        close->setText(QApplication::translate("Titlewg", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class Titlewg: public Ui_Titlewg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEWG_H
