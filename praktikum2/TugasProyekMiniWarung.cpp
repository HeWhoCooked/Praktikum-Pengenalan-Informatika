#include <iostream>
using namespace std;

struct Barang {
    string nama;
    int jumlah;
    int harga;
};

int main()
{
    const int jumlahBarang = 3;
    Barang warung[3] = {
        {"Sabun", 20, 3000},
        {"Shampoo", 8, 500},
        {"Air mineral", 10, 3000}
    };
    
    string cari;
    bool ketemu = false;
    
    cout << "===Barang Warung===" << endl;
    cout << "Nama Barang:";
    cin >> cari;
    
    for (int i = 0; i < jumlahBarang; i++) {
        if (warung[i].nama == cari) {
            cout << "Stok: " << warung[i].jumlah << endl;
            cout << "Harga: " << warung[i].harga << endl;
            ketemu = true;
            break;
        }
        if (!ketemu) {
            cout << "Barangnya ga ada" << endl;
        }
    }
    
    return 0;
}

