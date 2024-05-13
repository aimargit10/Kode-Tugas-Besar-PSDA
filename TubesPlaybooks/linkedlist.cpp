#include "linkedList.h"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insert(const QString& judul, const QString& penerbit, int tahunTerbit, const QString& sinopsis) {
    Node* newNode = new Node;
    newNode->judul = judul;
    newNode->penerbit = penerbit;
    newNode->tahunTerbit = tahunTerbit;
    newNode->sinopsis = sinopsis;
    newNode->next = head;
    head = newNode;
}

bool LinkedList::update(const QString& judul, const QString& penerbit, int tahunTerbit, const QString& sinopsis) {
    Node* current = head;
    while (current != nullptr) {
        if (current->judul == judul) {
            current->penerbit = penerbit;
            current->tahunTerbit = tahunTerbit;
            current->sinopsis = sinopsis;
            return true;
        }
        current = current->next;
    }
    return false;
}

bool LinkedList::remove(const QString& judul) {
    Node* current = head;
    Node* prev = nullptr;
    while (current != nullptr) {
        if (current->judul == judul) {
            if (prev)
                prev->next = current->next;
            else
                head = current->next;
            delete current;
            return true;
        }
        prev = current;
        current = current->next;
    }
    return false;
}

Node* LinkedList::find(const QString& judul) {
    Node* current = head;
    while (current != nullptr) {
        if (current->judul == judul)
            return current;
        current = current->next;
    }
    return nullptr;
}
