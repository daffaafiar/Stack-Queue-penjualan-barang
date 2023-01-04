#include "stack&queue.h"
#include <iostream>

using namespace std;

int main() {

     int N = 5;
     int i = 1;

     antrianOrder Q;
     infotypeantrian antrian;
     adr pAntrian;
     string namaDicari;
     string nama;
     int choice;

     infotypestack X;
     Stack M100;
     Stack M84;
     createStack(M100);
     createStack(M84);

     createAntrian(Q);
     cout << "==================TUBES STD====================" << endl;
     cout << "=================KELOMPOK 12===================" << endl;
     cout << "=====================MENU======================" << endl;
     cout << "1. Input Stock Barang" << endl;
     cout << "2. input Data Antrian" << endl;
     cout << "3. Show Antrian " << endl;
     cout << "4. Show Stock" << endl;
     cout << "5. Cari Antrian" << endl;
     cout << "6. Konfirmasi Pembelian" << endl;
     cout << "==============================================" << endl;
     cout << "pilih :";
     cin >> choice;

  while(choice != 0){
     switch (choice){
     case 1:
        cout << "================== Stock Barang ====================" << endl;
        // Stock M100 = 10 Barang
        while (M100.Top < 10) {
           push(M100, "M100");
        }
        print(M100);
        // Stock M84 = 3 Barang

        while (M84.Top < 3) {
        push(M84, "M84");
        }
        cout << endl;
        print(M84);
        cout << endl;
        break;

    case 2:
        cout << "PRE-ORDER (11 Januari)" << endl;
        while (i <= N) {
            cout << "Antrian ke- " << i << endl;
            cout << "Nama : ";
            cin >> antrian.nama;
            cout << "keyboard : ";
            cin >> antrian.barang;
            pAntrian = new element;
            createElement(antrian, pAntrian);
            enqueue(Q, pAntrian);
            i++;
        }
        break;

    case 3:
        showSemuaAntrian(Q);
        break;

    case 4:
        printStock(M100);
        printStock(M84);
        break;

    case 5:
        cin >> namaDicari;
        cari(Q, namaDicari);
        break;

    case 6:
        cout << "PENGAMBILAN BARANG DI TOKO (12 Januari)" << endl;
        cout << "STOCK AWAL" << endl;
        printStock(M100);
        printStock(M84);
        while (N >= 1) {
            pembelian(Q, M100, M84);
            N--;
        }
        printStock(M100);
        printStock(M84);

        cout << "transaksi berhasil" << endl;

        dequeue(Q, pAntrian);
        showSemuaAntrian(Q);
        break;

    }
    cout << "      " << endl;
    cout << "==============================================" << endl;
    cout << "1. Input Stock Barang" << endl;
    cout << "2. input Data Antrian" << endl;
    cout << "3. Show Antrian " << endl;
    cout << "4. Show Stock" << endl;
    cout << "5. Cari Antrian" << endl;
    cout << "6. Konfirmasi Pembelian" << endl;
    cout << "==============================================" << endl;
    cout << "pilih : ";
    cin >> choice;

  }
  return 0;
}

