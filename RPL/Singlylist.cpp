#include "Singlylist.h"
#include <iostream>
using namespace std;

// Membuat list baru yang masih kosong
void CreateList(List &L) { //parameter L adalah list yang akan dibuat
    L.First = Nil;
}

// Memesan memori untuk satu elemen baru
address alokasi(infotype x) { //parameter x adalah data yang akan disimpan
    address P = new ElmList; // Memesan memori untuk elemen baru
    P->info = x; // Mengisi info dengan data x
    P->next = Nil; // Next diisi Nil karena belum ada elemen setelahnya
    return P;
}

// Mengembalikan memori yang sudah tidak dipakai
void dealokasi(address &P) { 
    delete P;
}

// Menambahkan elemen baru di awal list
void insertFirst(List &L, address P) {
    P->next = L.First; // Sambungkan elemen baru ke elemen pertama yang lama
    L.First = P;       // Jadikan elemen baru sebagai yang pertama
}


// Menampilkan isi dari semua elemen dalam list
void printInfo(List L) {
    address P = L.First;
    if (P == Nil) {
        cout << "List Kosong!" << endl;
    } else {
        while (P != Nil) {
            cout << P->info << " ";
            P = P->next;
        }
        cout << endl;
    }
}