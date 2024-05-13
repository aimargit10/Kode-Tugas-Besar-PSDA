#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include "linkedList.h"

QT_BEGIN_NAMESPACE
namespace Ui { class User; }
QT_END_NAMESPACE

class User : public QMainWindow
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

private slots:
    void search();

private:
    Ui::User *ui;
    LinkedList *linkedList;
};

#endif // USER_H
