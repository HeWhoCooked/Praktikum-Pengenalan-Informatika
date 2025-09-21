#include <iostream>
using namespace std;

struct Barang {
    string nama;
    int jumlah;
    int harga;
}; // untuk mempresentasikan data barang

int main()
{
    const int jumlahBarang = 3; // jumlah barang yang ada
    Barang warung[3] = {
        {"Sabun", 20, 3000},
        {"Shampoo", 8, 500},
        {"LeMineral", 10, 3000} // air mineral diganti jadi lemineral(air mineral malah eror jir)
    }; // untuk menyimpan data awal barang
    
    string cari; // variabel untik input nama barang
    bool ketemu = false; // flag untuk cek barang ada atau tidak
    
    cout << "===Barang Warung===" << endl;
    cout << "Nama Barang: ";
    cin >> cari; // input nama barang, ga bisa spasi (gw belum tau jir)
    
    // proses cari barang
    for (int i = 0; i < jumlahBarang; i++) {
        if (warung[i].nama == cari) {
            
            double totalBelanja = warung[i].jumlah * warung[i].harga;
            
            cout << "Stok           : " << warung[i].jumlah << endl;
            cout << "Harga          : " << warung[i].harga << endl;
            cout << "Total Belanja  : " << totalBelanja << endl;
            ketemu = true;
            break; // keluar loop
        }
        
    }
    
    // ini kalo barang ga ketemu
    if (!ketemu) {
            cout << "Barangnya ga ada, bre." << endl;
        }
    
            
    return 0;
}