#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main(){
    List L;
    cout << "Pembuatan List" << endl;
    createList(L);
    cout << "apakah list-nya kosong? " << isEmpty(L) << endl;

    // --- ELEMEN 1 ---
    cout << "\nPembuatan elemen 1" << endl;
    Mahasiswa M;
    cout << "Masukkan nama: "; cin.getline(M.nama, 30);
    cout << "Masukkan NIM: ";  cin.getline(M.nim, 10);
    
    // Alokasi langsung without 'new elmList()' beforehand to prevent leaks
    address p = alokasi(M);
    insertFirst(L, p);

    // --- ELEMEN 2 ---
    cout << "\ninsert first (Elemen 2)" << endl;
    cout << "Masukkan nama: "; cin.getline(M.nama, 30);
    cout << "Masukkan NIM: ";  cin.getline(M.nim, 10);
    
    address q = alokasi(M);
    insertFirst(L, q);

    // --- ELEMEN 3 ---
    cout << "\ninsert last (Elemen 3)" << endl;
    cout << "Masukkan nama: "; cin.getline(M.nama, 30);
    cout << "Masukkan NIM: ";  cin.getline(M.nim, 10);
    
    address z = alokasi(M);
    insertLast(L, z);

    // --- ELEMEN 4 ---
    cout << "\ninsert after (Elemen 4)" << endl;
    cout << "Masukkan nama: "; cin.getline(M.nama, 30);
    cout << "Masukkan NIM: ";  cin.getline(M.nim, 10);

    address y = alokasi(M);
    insertAfter(L, y);
    
    // --- OUTPUT ---
    cout << "\n--- Hasil List ---" << endl;
    printInfo(L);
    cout << "apakah list-nya kosong? " << isEmpty(L) << endl;  

    // Note: Usually, you only dealokasi when deleting a node from the list.
    // If your printInfo relies on L, do not delete them until the program ends.
    dealokasi(p);
    dealokasi(q);
    dealokasi(z);
    dealokasi(y);
    
    return 0;
}