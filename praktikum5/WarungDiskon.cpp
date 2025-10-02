#include <iostream>
using namespace std;

// Rombak ulang karena bikin data pelanggan :')

struct Barang {
    string nama;
    int stok;
    int harga;
}; // untuk mempresentasikan data barang

int main()
{
    const int jumlahBarang = 3; // jumlah barang yang ada
    Barang warung[jumlahBarang] = {
        {"Sabun", 20, 3000},
        {"Shampoo", 30, 500},
        {"LeMineral", 10, 3000}
    }; // data awal barang di warung

    cout << "=== WARUNG YANG HANYA PUNYA 3 BARANG ===\n";

    // Menampilkan daftar barang
    for (int i = 0; i < jumlahBarang; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;
        cout << "Nama Barang : " << warung[i].nama << endl;
        cout << "Stok        : " << warung[i].stok << " pcs" << endl;
        cout << "Harga       : Rp" << warung[i].harga << endl;
    }

    // Input pembelian dua pelanggan
    int jumlahBeliPelanggan[2][jumlahBarang];
    double totalBelanja[2] = {0, 0};
    double diskon[2] = {0, 0};
    double totalSetelahDiskon[2] = {0, 0};

    for (int x = 0; x < 2; x++) {
        cout << "\n=== Masukkan data belanja Pelanggan " << x + 1 << " ===\n";
        for (int i = 0; i < jumlahBarang; i++) {
            cout << "Jumlah " << warung[i].nama << " yang dibeli: ";
            cin >> jumlahBeliPelanggan[x][i];

            // Hitung total belanja
            totalBelanja[x] += jumlahBeliPelanggan[x][i] * warung[i].harga;
        }
        
        // Hitung diskon
        if (totalBelanja[x] >= 100000) {
            diskon[x] = 0.10 * totalBelanja[x];
        } else if (totalBelanja[x] >= 50000) {
            diskon[x] = 0.05 * totalBelanja[x];
        } else {
            diskon[x] = 0;
        }

        totalSetelahDiskon[x] = totalBelanja[x] - diskon[x];
    }

    // Tampilkan total belanja masing-masing
    for (int x = 0; x < 2; x++) {
        cout << "\nTotal belanja Pelanggan " << x + 1 << endl;
        cout << "Total Belanja      : Rp" << totalBelanja[x] << endl;
        cout << "Diskon             : Rp" << diskon[x] << endl;
        cout << "Total Setelah Diskon: Rp" << totalSetelahDiskon[x] << endl;
    }

    // Bandingkan total belanja
    cout << "\n=== Perbandingan Belanja ===\n";
    if (totalSetelahDiskon[0] > totalSetelahDiskon[1]) {
        cout << "Pelanggan 1 belanja lebih banyak.\n";
    } else if (totalSetelahDiskon[0] < totalSetelahDiskon[1]) {
        cout << "Pelanggan 2 belanja lebih banyak.\n";
    } else {
        cout << "Kedua pelanggan belanja dengan jumlah yang sama.\n";
    }

    return 0;
}