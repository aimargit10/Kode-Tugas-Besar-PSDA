/********************************************************************************
** Form generated from reading UI file 'playbooks.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYBOOKS_H
#define UI_PLAYBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Playbooks
{
public:
    QWidget *centralwidget;
    QLabel *username;
    QLabel *label_2;
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Playbooks)
    {
        if (Playbooks->objectName().isEmpty())
            Playbooks->setObjectName("Playbooks");
        Playbooks->resize(800, 600);
        centralwidget = new QWidget(Playbooks);
        centralwidget->setObjectName("centralwidget");
        username = new QLabel(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(300, 120, 81, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 190, 81, 16));
        usernameEdit = new QLineEdit(centralwidget);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setGeometry(QRect(300, 150, 211, 21));
        passwordEdit = new QLineEdit(centralwidget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(300, 220, 211, 21));
        passwordEdit->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(370, 270, 80, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 10, 191, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(24);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setTextFormat(Qt::MarkdownText);
        label_3->setScaledContents(false);
        label_3->setWordWrap(false);
        Playbooks->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Playbooks);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Playbooks->setMenuBar(menubar);
        statusbar = new QStatusBar(Playbooks);
        statusbar->setObjectName("statusbar");
        Playbooks->setStatusBar(statusbar);

        retranslateUi(Playbooks);

        QMetaObject::connectSlotsByName(Playbooks);
    } // setupUi

    void retranslateUi(QMainWindow *Playbooks)
    {
        Playbooks->setWindowTitle(QCoreApplication::translate("Playbooks", "Playbooks", nullptr));
        username->setText(QCoreApplication::translate("Playbooks", "Username :", nullptr));
        label_2->setText(QCoreApplication::translate("Playbooks", "Password :", nullptr));
        loginButton->setText(QCoreApplication::translate("Playbooks", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("Playbooks", "PlayBooks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Playbooks: public Ui_Playbooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYBOOKS_H
