#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;


#define first(A) A.first
#define last(A) A.last
#define info(A) A->info
#define next(A) A->next
#define prev(A) A->prev
#define NIL NULL

struct dataDLL {
//sesuaikan dengan data yang Anda dapatkan sesuai soal
..............
..............
..............
..............
..............
};

typedef .......... infotype;
typedef struct elmList *adrdll;

struct elmList{
    infotype info;
    adrdll next;
    adrdll prev;
};

struct listDLL{
    adrdll first;
    adrdll last;
};

void buatList(listDLL &L);
/** IS. -
    FS. terbentuk sebuah list di mana, first dan last dari L bernilai NIL */

void buatElemen(adrdll &P, .............., .........., .........., ............, ..............)
/** IS. terdefinisi data ........ yang terdiri dari data .....................
    FS. pointer P berisi alamat alokasi memori sebuah elmList yang berisi data ....*/

void insertFirst(listDLL &L, adrdll P);
/** IS. terdefinisi pointer p berisi alamat elmList, dan sebuah list L (L mungkin kosong)
    FS. elmList yang ditunjuk oleh P ditambahkan ke dalam list sebagai data pertama */

void insertLast(listDLL &L, adrdll P);
/** IS. terdefinisi pointer p berisi alamat elmList, dan sebuah list L (L mungkin kosong)
    FS. elmList yang ditunjuk oleh P ditambahkan ke dalam list sebagai data terakhir */

void deleteFirst(listDLL &L, adrdll &P);
/** IS. terdefinisi pointer p alamat elmList yang masih kosong, dan sebuah list L (L mungkin kosong)
    FS. P berisi alamat elmList yang pertama, elmList yang ditunjuk oleh P dihapus dari list  */

void deleteLast(listDLL &L, adrdll &P);
/** IS. terdefinisi pointer p alamat elmList yang masih kosong, dan sebuah list L (L mungkin kosong)
    FS. P berisi alamat elmList yang terakhir, elmList yang ditunjuk oleh P dihapus dari list  */

void lihatList(listDLL L);
/** IS. terdefinisi sebuah list L
    FS. menampilkan seluruh ID, judul dan pengarang yang terdapat pada info di elmList*/

#endif // DLL_H_INCLUDED
