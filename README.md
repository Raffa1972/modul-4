# Modul 4 - Singly Linked List

## Deskripsi
Repository ini berisi tugas praktikum Struktur Data Modul 4 tentang **Singly Linked List** menggunakan bahasa pemrograman C++. Program ini digunakan untuk menyimpan dan mengelola data mahasiswa yang terdiri dari nama dan NIM.

## Fitur
- Membuat list kosong.
- Memeriksa apakah list kosong menggunakan `isEmpty()`.
- Membuat elemen baru menggunakan `alokasi()`.
- Menambahkan elemen di awal list menggunakan `insertFirst()`.
- Menambahkan elemen di akhir list menggunakan `insertLast()`.
- Menambahkan elemen menggunakan `insertAfter()`.
- Menampilkan seluruh data mahasiswa menggunakan `printInfo()`.
- Menghitung jumlah elemen menggunakan `nbList()`.

## Struktur Data
Data mahasiswa disimpan dalam struktur berikut:
- `nama`: nama mahasiswa.
- `nim`: nomor induk mahasiswa.
- `next`: pointer yang menunjuk ke elemen berikutnya.

Setiap elemen saling terhubung melalui pointer sehingga membentuk sebuah Singly Linked List.

## Struktur File
- `main.cpp` — program utama untuk menjalankan dan menguji linked list.
- `mahasiswa.h` — deklarasi struktur data dan fungsi linked list.
- `mahasiswa.cpp` — implementasi fungsi-fungsi linked list.
- `main.exe` — file hasil kompilasi program pada Windows.

## Cara Menjalankan
Pastikan compiler C++ seperti MinGW atau GCC sudah terpasang.

1. Buka terminal di folder repository.
2. Kompilasi program dengan perintah:

   ```bash
   g++ main.cpp mahasiswa.cpp -o main
   ```

3. Jalankan program di Windows:

   ```powershell
   .\main.exe
   ```

## Kesimpulan
Melalui praktikum ini, mahasiswa dapat memahami konsep dasar Singly Linked List, penggunaan pointer, alokasi memori dinamis, serta operasi penambahan dan penelusuran elemen pada struktur data.

---

**Mata Kuliah:** Struktur Data  
**Modul:** 4 - Singly Linked List  
**Bahasa Pemrograman:** C++
