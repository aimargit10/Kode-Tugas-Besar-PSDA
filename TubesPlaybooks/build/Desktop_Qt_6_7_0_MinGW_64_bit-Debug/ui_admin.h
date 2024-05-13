/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QPushButton *CreateButton;
    QPushButton *UpdateButton;
    QPushButton *DeleteButton;
    QLineEdit *penerbitLineEdit;
    QLineEdit *judulLineEdit;
    QLineEdit *tahunterbitLineEdit;
    QLineEdit *sinopsisLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTableView *tableView;
    QPushButton *ReadButton;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(827, 522);
        CreateButton = new QPushButton(Admin);
        CreateButton->setObjectName("CreateButton");
        CreateButton->setGeometry(QRect(160, 290, 80, 24));
        UpdateButton = new QPushButton(Admin);
        UpdateButton->setObjectName("UpdateButton");
        UpdateButton->setGeometry(QRect(320, 290, 80, 24));
        DeleteButton = new QPushButton(Admin);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setGeometry(QRect(660, 290, 80, 24));
        penerbitLineEdit = new QLineEdit(Admin);
        penerbitLineEdit->setObjectName("penerbitLineEdit");
        penerbitLineEdit->setGeometry(QRect(160, 140, 581, 21));
        judulLineEdit = new QLineEdit(Admin);
        judulLineEdit->setObjectName("judulLineEdit");
        judulLineEdit->setGeometry(QRect(160, 100, 581, 21));
        tahunterbitLineEdit = new QLineEdit(Admin);
        tahunterbitLineEdit->setObjectName("tahunterbitLineEdit");
        tahunterbitLineEdit->setGeometry(QRect(160, 180, 581, 21));
        sinopsisLineEdit = new QLineEdit(Admin);
        sinopsisLineEdit->setObjectName("sinopsisLineEdit");
        sinopsisLineEdit->setGeometry(QRect(160, 220, 581, 31));
        label = new QLabel(Admin);
        label->setObjectName("label");
        label->setGeometry(QRect(68, 100, 71, 20));
        label_2 = new QLabel(Admin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(68, 140, 71, 20));
        label_3 = new QLabel(Admin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(68, 180, 71, 20));
        label_4 = new QLabel(Admin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(68, 230, 71, 20));
        label_5 = new QLabel(Admin);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(350, 20, 191, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(24);
        font.setBold(true);
        label_5->setFont(font);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setTextFormat(Qt::MarkdownText);
        label_5->setScaledContents(false);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(false);
        tableView = new QTableView(Admin);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(240, 330, 421, 171));
        ReadButton = new QPushButton(Admin);
        ReadButton->setObjectName("ReadButton");
        ReadButton->setGeometry(QRect(490, 290, 80, 24));

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Form", nullptr));
        CreateButton->setText(QCoreApplication::translate("Admin", "Create", nullptr));
        UpdateButton->setText(QCoreApplication::translate("Admin", "Update", nullptr));
        DeleteButton->setText(QCoreApplication::translate("Admin", "Delete", nullptr));
        label->setText(QCoreApplication::translate("Admin", "Judul Buku :", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "Penerbit :", nullptr));
        label_3->setText(QCoreApplication::translate("Admin", "Tahun Terbit :", nullptr));
        label_4->setText(QCoreApplication::translate("Admin", "Sinopsis :", nullptr));
        label_5->setText(QCoreApplication::translate("Admin", "ADMIN", nullptr));
        ReadButton->setText(QCoreApplication::translate("Admin", "Read", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
