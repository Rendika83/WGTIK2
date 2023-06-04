#ifndef MODUL6_H_INCLUDED
#define MODUL6_H_INCLUDED
#include <iostream>
using namespace std;
#define nil NULL
#define info(p) (p)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
struct buku {
    int ID;
    string judul;
    string pengarang;
    int tahun;

};

typedef buku infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;

};

struct List {
    address first;
    address last;

};

void buatList_1304211041(List &L);
void buatElemen_1304211041(address &P, int ID, string judul, string pengarang, int tahun);
bool listKosong_1304211041 (List L);
void insertFirst_1304211041 (List &L, address P);
void insertLast_1304211041 (List &L, address P);
void insertAfter_1304211041 (List &L, address P);
void tambahData_1304211041 (List &L, int ID, string judul, string pengarang, int tahun);
void deleteFirst_1304211041 (List &L, address P);


#endif // MODUL6_H_INCLUDED
