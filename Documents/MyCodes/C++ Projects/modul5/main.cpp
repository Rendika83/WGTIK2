#include <iostream>
#include "modul5.h"
#include <iostream>

using namespace std;

int main()
{
    list L;
    int jumlah_data, pilihan;
    address x,P;

    createNewList_1304211041(L);

    while(true){
        cout << "MENU : " << endl;
        cout << "1. Tambah Data masakan" << endl;
        cout << "2. Tampilkan semua data masakan" << endl;
        cout << "3. Tampilkan semua data masakan yang masih tersedia (belum habis terjual)" << endl;
        cout << "4. Tampilkan semua data masakan yang paling laku terjual (best seller)" << endl;
        cout << "5. Hapus semua data masakan yang sudah laku terjual" << endl;
        cout << "6. Tambah Data Masakan" << endl;
        cout << "0. Selesai" << endl;
        cout << "pilih: " << endl;
        cin  >> pilihan;

        if(pilihan == 1){
            cout << "berapa data akan diinput : " << endl;
            cin  >> jumlah_data;
            addNElementList_1304211041(L, jumlah_data);

        }else if(pilihan == 2){
            showAllFood_1304211041(L);
        }else if(pilihan == 3){
            showAvailableFood_1304211041(L);
        }else if(pilihan == 4){
            showBestSeller_1304211041(L);
        }else if(pilihan == 5){
            deleteAllSoldOut_1304211041(L);
        }else if(pilihan == 6){
            pesanan_1304211041(L);
        }else if(pilihan == 0){
            break;
        };
    };
        addNElementList_1304211041(L,5);
        showAllFood_1304211041(L);

        pesanan_1304211041(L);
        pesanan_1304211041(L);
        showAvailableFood_1304211041(L);

        pesanan_1304211041(L);
        pesanan_1304211041(L);
        x = findMinRemaining_1304211041(L);
        deleteAfter_1304211041(L,x,P);

        showBestSeller_1304211041(L);
        deleteAllSoldOut_1304211041(L);

        showAllFood_1304211041(L);

    return 0;

}
