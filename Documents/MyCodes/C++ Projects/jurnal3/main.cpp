#include <iostream>
#include "jurnal3.h"

using namespace std;

int main(){

    cout << "TERBIMBING" << endl;

        //Variabel
        lemari lem;
        lem.maks = 0;
        lem.no_laci = -1;

        // Nambah data & Output
        tambahdata_1304211041(lem, 6);
        lihatdata_1304211041(lem);

        tambahdata_1304211041(lem, 4);
        lihatdata_1304211041(lem);

        tambahdata_1304211041(lem, 0);
        lihatdata_1304211041(lem);

        tambahdata_1304211041(lem, 2);
        lihatdata_1304211041(lem);

    cout<<endl;

        // Mencari Index int i;
        int i;
        i = caridata_1304211041(lem, 8);
        cout<<i<<endl;
        i = caridata_1304211041(lem, 6);
        cout<<i<<endl;

        cout << "" << endl;
        cout << "MANDIRI" << endl;
        reversed_view_1304211041(lem);
        tambahdata_1304211041(lem, 0);
        reversed_view_1304211041(lem);
        return 0;

}
