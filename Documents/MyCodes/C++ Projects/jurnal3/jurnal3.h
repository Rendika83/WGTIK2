#ifndef JURNAL3_H_INCLUDED
#define JURNAL3_H_INCLUDED

#include <iostream>

using namespace std;

const int nMax = 50;
struct lemari{
        int baju[nMax];
        int maks;
        int no_laci;
};
void tambahdata_1304211041(lemari &C, int x);
void lihatdata_1304211041(lemari C);
int caridata_1304211041(lemari C, int x);
void reversed_view_1304211041 (lemari C);
void delete_data_1304211041(lemari &C);
#endif
