#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "linkedlist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Admin; }
QT_END_NAMESPACE

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void createBuku();
    void readBuku();
    void updateBuku();
    void deleteBuku();

private:
    Ui::Admin *ui;
    LinkedList *linkedList;
    QStandardItemModel *model;
};

#endif // ADMIN_H
