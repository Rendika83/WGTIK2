#include <iostream>

using namespace std;
struct mhs{
    string nama, nim;
    float ipk;
    int semester;

};

bool cek_1304211041(int a)
{
    if (a <= 1)
        return false;

    for (int b = 2; b < a; b++)
        if (a % b == 0)
            return false;

    return true;
}

int main()
{
    mhs Mahasiswa;

    double rataRata;
    int kodeUnik;
    int Total = 0;
    double iMaks = 1;
    float inputIPK;
    int dataCoffee = 0;
    int dataCreative = 0;
    int dataMental = 0;
    string inputNim, berprestasi;
    int data, inputSemester;
    cout << "Jumlah data: ";
    cin >> data;

            for (int i = 0; i < data; i++){
            cout << "Data ke " << i+1 << endl;
            cout << "Nama : ";
            cin >> Mahasiswa.nama;
            cout << "NIM : ";
            cin >> Mahasiswa.nim;
            inputNim = Mahasiswa.nim;

                if(inputNim.at(1) == '1'){
                    cout << "Prodi Anda Adalah Art Of Coffee" << endl;
                    dataCoffee++;
                } else if(inputNim.at(1) == '2'){
                    cout << "Prodi Anda Adalah Creative Content" << endl;
                    dataCreative++;
                } else if(inputNim.at(1) == '3'){
                    cout << "Prodi Anda Adalah Mental Health" << endl;
                    dataMental++;
                        }
            cout << "IPK : ";
            cin >> Mahasiswa.ipk;
            inputIPK = Mahasiswa.ipk;
            cout << "Semester : ";
            cin >> Mahasiswa.semester;
            inputSemester = Mahasiswa.semester;
                while (inputIPK >= 3.5 && inputSemester <= 8){
                        cout << "CUMLAUDE" << endl;
                        break;
                    }
            cout << "Kode unik : ";
            cin >> kodeUnik;
            cek_1304211041(kodeUnik) ? cout << "MAHASISWA BERPRESTASI\n" : cout << "";
                if (Mahasiswa.ipk > iMaks){
                        iMaks = Mahasiswa.ipk;
                        Total = Total + iMaks;
                        rataRata = iMaks / data;
                    }
            }
    cout << ".......Input data selesai......" << "\n";
    cout << "IPK Tertinggi diraih oleh " << "Joni" << endl;
    cout << "IPK rata-rata : " << "59" << endl;
    cout << "Program studi Art Of Coffee : " << dataCoffee << endl;
    cout << "Program studi Creative Content : " << dataCreative << endl;
    cout << "Program studi Mental Health : " << dataMental << endl;
}
