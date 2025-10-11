#include <iostream>
using namespace std;

int main()
{
    int stokMie = 0;
    int pilihan;
    string choice;
    
    cout << "=== Gudang Mie Instan ===\n";
    cout << "1. Tambah stok\n";
    cout << "2. Kurangi stok\n";
    cout << "3. Lihat stok\n";
    cout << "4. Keluar\n";
    cout << "Pilih (1-4): ";
    
    while(true) {
        cin >> pilihan;
        switch(pilihan) {
            case 1:
                stokMie = stokMie + 1;
                cout << "Mie instan nambah 1\n"; // Tiba2 nambah sendiri bjir, pesugihan
                break;
            case 2:
                stokMie = stokMie - 1;
                cout << "Mie instan berkurang satu\n";
                break;
            case 3:
                cout << "Jumlah mie instan sekarang ada " << stokMie << " buah.\n";
                break;
            case 4:
                cout << "Keluar dari program...\n";
                break;
            default:
                cout << "Tinggal pilih dari 1-4 aja kagak paham lu.\n";
                break;
        } while(true) {
            cout << "Ada hal yang ingin dilakukan lagi(y/n)? ";
            cin >> choice;
            if (choice == "y") {
                cout << "Pilih (1-4): ";
                break;
            } else if (choice == "n") {
                break;
            }
        } if (choice == "n") {
            break;
        }
    }
    
    cout << "#############################\n";
    cout << "Program telah berakhir";
    
    return 0;
}