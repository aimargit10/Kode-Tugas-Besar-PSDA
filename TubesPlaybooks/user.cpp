#include "user.h"
#include "ui_user.h"
#include "admin.h" // Menambahkan include admin.h jika Admin digunakan di sini
#include <QMessageBox>


User::User(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);

    connect(ui->searchButton, &QPushButton::clicked, this, &User::search);
}

User::~User()
{
    delete ui;
}

void User::search()
{
    QString judulSearch = ui->judulLineEdit->text();
    bool ditemukan = false;
    Node* bukuNode = linkedList->find(judulSearch); // Menggunakan objek linkedList yang dideklarasikan dalam kelas
    if (bukuNode != nullptr) {

        // Buat model baru untuk menampilkan hasil pencarian
        QStandardItemModel *searchResultModel = new QStandardItemModel(1, 4, this);

        // Set judul kolom
        searchResultModel->setHorizontalHeaderLabels(QStringList() << "Judul" << "Penerbit" << "Tahun Terbit" << "Sinopsis");

        // Tambahkan data hasil pencarian ke model
        searchResultModel->setItem(0, 0, new QStandardItem(bukuNode->judul));
        searchResultModel->setItem(0, 1, new QStandardItem(bukuNode->penerbit));
        searchResultModel->setItem(0, 2, new QStandardItem(QString::number(bukuNode->tahunTerbit)));
        searchResultModel->setItem(0, 3, new QStandardItem(bukuNode->sinopsis));

        // Set model untuk QTableView
        ui->outputTableView->setModel(searchResultModel);

        ditemukan = true;
    }
    if (!ditemukan) {
        QMessageBox::warning(this, "Peringatan", "Buku tidak ada di dalam daftar!");
    }
}
