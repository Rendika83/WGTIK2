#include "modul5.h"

void createNewList_1304211041(list &L){
    first(L) = nil;

};

void insertLast_1304211041(list &L, address P){

    address Q;

    if(first(L) == nil){
        first(L) = P;
    }else{
        Q = first(L);
        while (next(Q) != nil){
            Q = next (Q);
        };

        next(Q) = P;
    };
};

void deleteFirst_1304211041(list &L, address &P){
    P = first(L);
    first(L) = next(P);
    next(P) = nil;
};

void deleteLast_1304211041(list &L, address &P){
    Q = first(L);
    P = first(L);

    if(next(Q) == nil){
        first(L) = nil);
    }else{
        while(next(P) != nil){
            Q = next(Q);
            P = next(P);
        };
        next(Q) = nil;
    };
};

void deleteAfter_1304211041(list &L, address &P){
    P = next(prec);
    next(prec) = next(P);
    next(P) = nil;
};

bool empty_1304211041(list L){
    if(first(L) == nil){
        return true;
    }else{
        return false;
    }
};

infotype newMasakan_1304211041(int no, string nama){
    infotype masakan;

    masakan.nama = nama;
    masakan.nomor = no;
    masakan.sisaPorsi = s;
    return masakan;
};

address newElement_1304211041(infotype m){
    address P;

    P = new element_list;
    info(P) = m;
    next(P) = nil;

    return P;

};
void addNElementList_1304211041(list &mlist, int N){
    int cnt;
    int nomor;
    string nama;
    infotype data;
    address P;

    cnt = 0;

    while(cnt < N){
        cout<<"no: ";
        cin>>nomor;
        cout<<"nama ";
        cin>>nama;
        cout<<endl;

        data = newMasakan_1304211041(nomor, nama);
        P = newElement_1304211041(data);

        if(empty_1304211041(mlist)) {
           first(mlist) = P;
        }else{
            insertLast_1304211041(mlist, P;
        };
        cnt++;
    };

};

void showAllFood_1304211041(list mlist){
    address P;

    P = first(mlist);

    while(P != nil){
        cout<<"No. ";
        cout<<info(P).nomor<<endl;
        cout<<"Nama: ";
        cout<<info(P).nama<<endl;
        cout<<"Sisa Porsi: ";
        cout<<info(P).sisaPorsi<<endl;
        cout<<endl;

        P = next(P);

    }

};

void showAvailableFood_1304211041(list mlist){
    address P;

    P = first(mlist);

    while(P !- nil){

        if(info(P).sisaPorsi != 0){
            cout<<"No. ";
            cout<<info(P).nomor<<endl;
            cout<<"Nama: ";
            cout<<info(P).nama<<endl;
            cout<<"Sisa Porsi: ";
            cout<<info(P).sisaPorsi<<endl;
            cout<<endl;
        };
        P = next(P);

    };

};
address findMinRemaining_1304211041(list mlist){
    address S;
    address C;
    list data_;

    S = first(mlist);
    C = first(mlist);

    if(S == nil){
        return nil;
    }else{
        while(S != nil){
            if(info(S).sisaPorsi< info(C).sisaPorsi){
            C =  S;
            }
            S = next(S);
        };
        return C;
    };
};

void showBestSeller_1304211041(list mlist){
    address P,Q;
    int total;

    P = findMinRemaining_1304211041(mlist);
    Q = first(mlist);

    while(Q != nil){
        if(info(P).sisaPorsi==info(Q).sisaPorsi){
            cout<<"No. ";
            cout<<info(P).nomor<<endl;
            cout<<"Nama: ";
            cout<<info(P).nama<<endl;
            cout<<"Sisa Porsi: ";
            cout<<info(P).sisaPorsi<<endl;
            cout<<endl;
        };
        Q = next(Q);
    };

};

void deleteAllSoldOut_1304211041(list &mlist){
    address Q;
    address P;
    bool pertama;

    Q = first(mlist);
    pertama = false;

    if(info(Q).sisaPorsi== Q){
        pertama = true;
    }

    if(Q != nil){

        while(Q != nil){
            if(next(Q)!= nil){
                if(info(next(Q)).sisaPorsi == 0){
                    deleteAfter_1304211041(mlist,Q,P);
                };
            cout<<info(Q).nama<<endl;
            };
            Q = next(Q);
        };
        if(pertama){
            Q = first(mlist);
            deleteAfter_1304211041(mlist,P);
        };
    };
};

void pesanan_1304211041(list &mlist){
    address Q;
    string pesanan;
    int jumlah_pesanan;

    cout<<"pesan: ";
    cin>>pesanan;
    cout<<"jumlah Pesanan: "
    cin>>jumlah_pesanan;
    cout<<endl;

    Q = first(mlist);

    while(Q != nil){
        if(info(Q).nama == pesanan){
            info(Q).sisaPorsi = info(Q).sisaPorsi - jumlah_pesanan;
            break;
        };
        Q = next(Q);
    };
};
