#ifndef MODUL5_H_INCLUDED
#define MODUL5_H_INCLUDED
#include <iostream>

using namespace std;

#define nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

int const s = 10;

struct masakan{
    int nomor;
    string nama;
    int sisaPorsi;
};

typedef masakan infotype;
typedef struct element_list *address;

struct element_list {
    infotype info
    address next
};
_
struct list{
    address first;
};

void createNewList_1304211041(list &L);
void insertLast_1304211041(list &L, address &P);
void deleteFirst_1304211041(list &L, address &P);
void deleteLast_1304211041(list &L, address &P);
void deleteAfter_1304211041(list &L, address prec, address &P);
bool empty_1304211041(list L);
infotype newMasakan_1304211041(int no, string nama);
address newElement_1304211041(infotype m);
void addNElementList_1304211041(list &mlist, int N);
void showAllFood_1304211041(list mlist);
void showAvailableFood_1304211041(list mlist);
address findMinRemaining_1304211041(list mlist);
void showBestSeller_1304211041(list mlist);
void deleteAllSoldOut_1304211041(list &mlist);
void pesanan_1304211041(list &mlist);


#endif // MODUL5_H_INCLUDED
