#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <QString>

struct Node {
    QString judul;
    QString penerbit;
    int tahunTerbit;
    QString sinopsis;
    Node* next;
};

class LinkedList {
public:
    LinkedList(); // Constructor
    ~LinkedList(); // Destructor
    void insert(const QString& judul, const QString& penerbit, int tahunTerbit, const QString& sinopsis);
    bool update(const QString& judul, const QString& penerbit, int tahunTerbit, const QString& sinopsis);
    bool remove(const QString& judul);
    Node* getHead() { return head; }
    Node* find(const QString& judul);

private:
    Node* head;
};

#endif // LINKEDLIST_H
