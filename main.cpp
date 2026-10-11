
#include <iostream>
using namespace std;

#define Nil NULL

struct Mahasiswa {
    char nama[30];
    char nim[10];
};

typedef Mahasiswa infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

address alokasi(Mahasiswa M) {
    address p = new elmList;
    p->info = M;
    p->next = Nil;
    return p;
}

bool isEmpty(List L) {
    return L.first == Nil;
}

void createList(List &L) {
    L.first = Nil;
}

void dealokasi(address p) {
    delete p;
}

void insertFirst(List &L, address p) {
    p->next = L.first;
    L.first = p;
}

void insertLast(List &L, address p) {
    if (isEmpty(L)) {
        L.first = p;
    } else {
        address q = L.first;

        while (q->next != Nil) {
            q = q->next;
        }

        q->next = p;
        p->next = Nil;
    }
}

void insertAfter(List &L, address p) {
    if (isEmpty(L)) {
        cout << "List kosong, tidak bisa insert after." << endl;
        return;
    }

    address q = L.first;

    while (q->next != Nil) {
        q = q->next;
    }

    q->next = p;
    p->next = Nil;
}

void printInfo(List L) {
    address p = L.first;

    while (p != Nil) {
        cout << "Nama: " << p->info.nama
             << ", NIM: " << p->info.nim << endl;

        p = p->next;
    }
}

int nbList(List L) {
    int jumlah = 0;
    address p = L.first;

    while (p != Nil) {
        jumlah++;
        p = p->next;
    }

    return jumlah;
}

int main() {
    List L;

    cout << "Pembuatan List" << endl;
    createList(L);

    cout << "Apakah list-nya kosong? "
         << isEmpty(L) << endl;

    // Elemen 1
    cout << "\nPembuatan elemen 1" << endl;
    Mahasiswa M;

    cout << "Masukkan nama: ";
    cin.getline(M.nama, 30);

    cout << "Masukkan NIM: ";
    cin.getline(M.nim, 10);

    address p = alokasi(M);
    insertFirst(L, p);

    // Elemen 2
    cout << "\nInsert First (Elemen 2)" << endl;

    cout << "Masukkan nama: ";
    cin.getline(M.nama, 30);

    cout << "Masukkan NIM: ";
    cin.getline(M.nim, 10);

    address q = alokasi(M);
    insertFirst(L, q);

    // Elemen 3
    cout << "\nInsert Last (Elemen 3)" << endl;

    cout << "Masukkan nama: ";
    cin.getline(M.nama, 30);

    cout << "Masukkan NIM: ";
    cin.getline(M.nim, 10);

    address z = alokasi(M);
    insertLast(L, z);

    // Elemen 4
    cout << "\nInsert After (Elemen 4)" << endl;

    cout << "Masukkan nama: ";
    cin.getline(M.nama, 30);

    cout << "Masukkan NIM: ";
    cin.getline(M.nim, 10);

    address y = alokasi(M);
    insertAfter(L, y);

    // Output
    cout << "\n--- Hasil List ---" << endl;
    printInfo(L);

    cout << "Apakah list-nya kosong? "
         << isEmpty(L) << endl;

    cout << "Jumlah mahasiswa: "
         << nbList(L) << endl;

    return 0;
}
