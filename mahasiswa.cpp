#include<iostream>
#include "mahasiswa.h"
#include <limits>
using namespace std;

struct elmList* alokasi(Mahasiswa M){
    address p = new elmList();
    p->info = M;
    p->next = Nil;
    return p;
}

bool isEmpty(List L){
    return (L.first == Nil);
}

void createList(List &L){
    L.first = Nil;
}

void dealokasi(address p){
    delete p;
}


void insertFirst(List &L, address p){
    if (isEmpty(L)) {
        L.first = p;
    } else {
        p->next = L.first;
        L.first = p;
    }
}

void insertLast(List &L, address p){
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

void insertAfter(List &L, address p){
    if (isEmpty(L)) {
        cout << "List kosong, tidak bisa insert after." << endl;
        return;
    }
    
    address q = L.first;
    while (q != Nil && q->next != Nil) {
        q = q->next;
    }
    
    if (q != Nil) {
        p->next = q->next;
        q->next = p;
    }
}

void printInfo(List L){
    address p = L.first;
    while (p != Nil) {
        cout << "Nama: " << p->info.nama << ", NIM: " << p->info.nim << endl;
        p = p->next;
    }
}

int nbList(List L){
    int count = 0;
    address p = L.first;
    while (p != Nil) {
        count++;
        p = p->next;
    }
    return count;
}