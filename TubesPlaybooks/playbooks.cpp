#include "playbooks.h"
#include "ui_playbooks.h"
#include "user.h"
#include "admin.h"

Playbooks::Playbooks(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Playbooks)
{
    ui->setupUi(this);
    connect(ui->loginButton, &QPushButton::clicked, this, &Playbooks::onLoginButtonClicked);

    // Inisialisasi userList di sini
    userList.insert("admin", "password");
    userList.insert("user1", "pass1");
    userList.insert("user2", "pass2");
}

Playbooks::~Playbooks() {
    delete ui;
}

void Playbooks::onLoginButtonClicked() {
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Username or password cannot be empty!");
        return;
    }

    if (userList.find(username, password)) {
        QMessageBox::information(this, "Success", "Login successful!");

        if (username == "admin" && password == "password") {
            Admin *adminWindow = new Admin();
            adminWindow->show();
        } else {
            User *userWindow = new User();
            userWindow->show();
        }


    } else {
        QMessageBox::warning(this, "Error", "Invalid username or password!");
    }
}
