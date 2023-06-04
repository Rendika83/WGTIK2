#include "jurnal3.h"
#include <iostream>
#include <stack>
using namespace std;

void tambahdata_1304211041(lemari &C, int x){
    if(C.no_laci < C.maks){
        C.baju[C.no_laci + 1] = x;
    }
    C.no_laci++ ;

}

void lihatdata_1304211041(lemari C){
int i = 0;
while(i <= C.no_laci){
        cout << C.baju[i] << " ";
        i++;
    }
    cout << endl;
}

int caridata_1304211041(lemari C, int x){
    int i =0;
    while(i < C.no_laci){
        if(C.baju[i] == x){
            return i;
        }
        i++;
    }
    return -1;
}
void reversed_view_1304211041(lemari C){
    int i = C.no_laci;
    while (i >= 0){
        cout << C.baju[i] << " ";
        i--;
    }
    cout << endl;
}

void delete_data_1304211041(lemari &C){
    C.no_laci -= 1;
}
