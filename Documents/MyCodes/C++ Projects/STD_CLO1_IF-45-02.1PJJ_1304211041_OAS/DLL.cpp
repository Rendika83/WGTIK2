#include "DLL.h"

void buatList(listDLL &L){
    first(L) = NIL;
    last(L) = NIL;
}


void buatElemen(adrdll &P, .............., .........., .........., ............, ..............){
    P = new elmList;
    //sesuaikan dengan data yang kalian dapatkan (cek soal)
    info(P)....... = ..........;
    info(P)....... = ..........;
    info(P)....... = ..........;
    info(P)....... = ..........;
    info(P)....... = ..........;
    next(P) = NIL;
    prev(P) = NIL;

}

void insertFirst(listDLL &L, adrdll P){
//cek soal apakah Anda perlu membuat procedure ini, jika tidak maka hapus procedure ini agar tidak menimbulkan error
    if(..............) {
        ..................
	..................
    }
    else{
        ..................   
        ..................
        ..................
    }

}

void insertLast(listDLL &L, adrdll P){
//cek soal apakah Anda perlu membuat procedure ini, jika tidak maka hapus procedure ini agar tidak menimbulkan error
    if(.............) {
        ..................
        ..................
    }
    else{
        ..................
        ..................
        ..................
    }
}



void lihatList(listDLL L){
    adrdll Q;

    if (...........) {
        cout << "list kosong" << endl;
    } else {
         Q = first(L);
         while(Q != NIL) {
            cout << info(Q)........<<" "<<info(Q)........<<" "<<info(Q)........<<" "<< info(Q)........<< " "<< info(Q)........<< endl;
            Q=next(Q);
         }
    }
}

void deleteFirst(listDLL &L, adrdll &P){
    if (.............) {
        cout << "list kosong" << endl;
    } else if (...............){
        ......................
        ......................
	......................
        next(P) = NIL;
    } else { //tinggal 1 elemen
        P = first(L);
        first(L) = NIL;
        last(L) = NIL;
        ......................
        ......................
    }
}

void deleteLast(listDLL &L, adrdll &P){
    if (.............) {
        cout << "list kosong" << endl;
    } else if (first(L) != last(L)){
        P = last(L);
        ...................... 
        ...................... 
        ...................... 
    } else { //tinggal 1 elemen
        P = first(L);
        ...................... 
        ...................... 
        next(P) = NIL;
        prev(P) = NIL;
    }
}

//Buatlah procedure insert N element
void addNElementList(listDLL &L, int N){
................
................
................

}

// buatlah fungsi (soal poin D) sesuai NIM untuk double linked list disini
..... .................. (...............){


