#include <iostream>
#include <cstdlib>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5;
    
    // BENAR: Menggunakan C besar
    CreateList(L);

    // Mengisi list sesuai urutan
    P5 = alokasi(9);
    insertFirst(L, P5);

    P4 = alokasi(12);
    insertFirst(L, P4);
    
    P3 = alokasi(8);
    insertFirst(L, P3);
    
    P2 = alokasi(0);
    insertFirst(L, P2);
    
    P1 = alokasi(2);
    insertFirst(L, P1);

    cout << "Isi list adalah: ";
    printInfo(L);
    
    system("pause");
    return 0;
}