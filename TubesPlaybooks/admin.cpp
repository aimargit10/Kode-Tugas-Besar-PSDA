#include "admin.h"
#include "ui_admin.h"
#include <QMessageBox>

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin),
    linkedList(new LinkedList()),
    model(new QStandardItemModel(this))
{
    ui->setupUi(this);

    connect(ui->CreateButton, &QPushButton::clicked, this, &Admin::createBuku);
    connect(ui->ReadButton, &QPushButton::clicked, this, &Admin::readBuku);
    connect(ui->UpdateButton, &QPushButton::clicked, this, &Admin::updateBuku);
    connect(ui->DeleteButton, &QPushButton::clicked, this, &Admin::deleteBuku);

    // Set the model for TableView
    ui->tableView->setModel(model);
    // Set column headers
    model->setHorizontalHeaderLabels(QStringList() << "Judul" << "Penerbit" << "Tahun Terbit" << "Sinopsis");
}

Admin::~Admin() {
    delete ui;
    delete linkedList;
    delete model;
}

void Admin::createBuku() {
    QString judul = ui->judulLineEdit->text();
    QString penerbit = ui->penerbitLineEdit->text();
    int tahunTerbit = ui->tahunterbitLineEdit->text().toInt();
    QString sinopsis = ui->sinopsisLineEdit->text();

    // Mengecek jika buku sudah ada sebelumnya
    if (linkedList->find(judul) != nullptr) {
        QMessageBox::warning(this, "Peringatan", "Buku sudah ada dalam daftar!");
        return;
    }

    // Menambahkan buku baru ke dalam linked list
    linkedList->insert(judul, penerbit, tahunTerbit, sinopsis);

    // Menambahkan data ke dalam model
    QList<QStandardItem*> rowData;
    rowData << new QStandardItem(judul)
            << new QStandardItem(penerbit)
            << new QStandardItem(QString::number(tahunTerbit))
            << new QStandardItem(sinopsis);
    model->appendRow(rowData);

    QMessageBox::information(this, "Sukses", "Buku berhasil ditambahkan!");
}

void Admin::updateBuku() {
    QString judulToUpdate = ui->judulLineEdit->text();
    QString penerbit = ui->penerbitLineEdit->text();
    int tahunTerbit = ui->tahunterbitLineEdit->text().toInt();
    QString sinopsis = ui->sinopsisLineEdit->text();

    Node* bukuNode = linkedList->find(judulToUpdate);
    if (bukuNode) {
        bukuNode->penerbit = penerbit;
        bukuNode->tahunTerbit = tahunTerbit;
        bukuNode->sinopsis = sinopsis;

        QMessageBox::information(this, "Sukses", "Informasi buku berhasil diperbarui!");
        readBuku(); // Memperbarui tampilan dengan data terbaru
    } else {
        QMessageBox::warning(this, "Peringatan", "Buku tidak ditemukan!");
    }
}

void Admin::deleteBuku() {
    QString judulToDelete = ui->judulLineEdit->text();

    if (linkedList->remove(judulToDelete)) {
        QMessageBox::information(this, "Sukses", "Buku berhasil dihapus!");
        readBuku(); // Memperbarui tampilan dengan data terbaru
    } else {
        QMessageBox::warning(this, "Peringatan", "Buku tidak ditemukan!");
    }
}

void Admin::readBuku() {
    // Membersihkan model sebelum menambahkan data baru
    model->clear();
    model->setHorizontalHeaderLabels(QStringList() << "Judul" << "Penerbit" << "Tahun Terbit" << "Sinopsis");

    // Memperbarui tampilan dengan data terbaru
    Node* currentNode = linkedList->getHead();
    while (currentNode != nullptr) {
        QList<QStandardItem*> rowData;
        rowData << new QStandardItem(currentNode->judul)
                << new QStandardItem(currentNode->penerbit)
                << new QStandardItem(QString::number(currentNode->tahunTerbit))
                << new QStandardItem(currentNode->sinopsis);
        model->appendRow(rowData);

        currentNode = currentNode->next;
    }
}
