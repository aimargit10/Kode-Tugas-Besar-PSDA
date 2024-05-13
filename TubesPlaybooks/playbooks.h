#ifndef PLAYBOOKS_H
#define PLAYBOOKS_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Playbooks; }
QT_END_NAMESPACE

class Playbooks : public QMainWindow
{
    Q_OBJECT

public:
    explicit Playbooks(QWidget *parent = nullptr);
    ~Playbooks();

private slots:
    void onLoginButtonClicked();

private:
    Ui::Playbooks *ui;

    class UserList {
    private:
        struct Node {
            QString username;
            QString password;
            Node* next;

            Node(const QString& user, const QString& pass, Node* n = nullptr)
                : username(user), password(pass), next(n) {}
        };

        Node* head;

    public:
        UserList() : head(nullptr) {}

        ~UserList() {
            while (head) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        }

        void insert(const QString& username, const QString& password) {
            Node* newNode = new Node(username, password);
            newNode->next = head;
            head = newNode;
        }

        bool find(const QString& username, const QString& password) const {
            Node* current = head;
            while (current) {
                if (current->username == username && current->password == password) {
                    return true;
                }
                current = current->next;
            }
            return false;
        }
    } userList; // Deklarasi userList sebagai instance dari kelas UserList
};

#endif // PLAYBOOKS_H
