/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainmenu
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Mainmenu)
    {
        if (Mainmenu->objectName().isEmpty())
            Mainmenu->setObjectName(QStringLiteral("Mainmenu"));
        Mainmenu->resize(400, 300);
        menuBar = new QMenuBar(Mainmenu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Mainmenu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Mainmenu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Mainmenu->addToolBar(mainToolBar);
        centralWidget = new QWidget(Mainmenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Mainmenu->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Mainmenu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Mainmenu->setStatusBar(statusBar);

        retranslateUi(Mainmenu);

        QMetaObject::connectSlotsByName(Mainmenu);
    } // setupUi

    void retranslateUi(QMainWindow *Mainmenu)
    {
        Mainmenu->setWindowTitle(QApplication::translate("Mainmenu", "Mainmenu", 0));
    } // retranslateUi

};

namespace Ui {
    class Mainmenu: public Ui_Mainmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
