#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED
// Tanpa menggunakan ini otomatis akan error ketika ada file yang meng-include file ini lebih dari satu kali
// Hal ini disebut dengan One definition rule (ODR).

#include <iostream>

#define Nil NULL //dialiaskan nil

//Mendefinisikan tipe data infotype sebagai integer
typedef int infotype;

//Mendefinisikan address sebagai pointer ke struct ElmList
typedef struct ElmList *address;

// Mendefinisikan struct untuk elemen list
struct ElmList {
    infotype info; // Tempat menyimpan data
    address next;  // Pointer ke elemen selanjutnya
};

// Mendefinisikan struct untuk list itu sendiri
struct List {
    address First; // Pointer yang hanya menunjuk ke elemen pertama
};

// Deklarasi Prosedur dan Fungsi Primitif

void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P); 
void insertFirst(List &L, address P);
void printInfo(List L);

#endif