#include <QApplication>
#include "playbooks.h"
#include "user.h"
#include "admin.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Playbooks playbooks;
    playbooks.show();

    return app.exec();
}
