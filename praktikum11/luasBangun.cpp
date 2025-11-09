#include <iostream>
#include <string>
using namespace std;

void garis() {
    cout << "===============================================" << endl;
}

void hitungLuasJajarGenjang() {
    double alas, tinggi, luas;
    cout << "Masukkan alas jajar genjang: ";
    cin >> alas;
    cout << "Masukkan tinggi jajar genjang: ";
    cin >> tinggi;
    luas = alas * tinggi;
    cout << "Luas Jajar Genjang: " << luas << " Cm " << endl;
}

void hitungLuasTrapesium() {
    double sisiSejajar1, sisiSejajar2, tinggi, luas;
    cout << "Masukkan sisi sejajar 1 trapesium: ";
    cin >> sisiSejajar1;
    cout << "Masukkan sisi sejajar 2 trapesium: ";
    cin >> sisiSejajar2;
    cout << "Masukkan tinggi trapesium: ";
    cin >> tinggi;
    luas = 0.5 * (sisiSejajar1 + sisiSejajar2) * tinggi;
    cout << "Luas Trapesium: " << luas << " Cm " << endl;
}

void hitungLuasBelahKetupat() {
    double diagonal1, diagonal2, luas;
    cout << "Masukkan diagonal 1 belah ketupat: ";
    cin >> diagonal1;
    cout << "Masukkan diagonal 2 belah ketupat: ";
    cin >> diagonal2;
    luas = 0.5 * diagonal1 * diagonal2;
    cout << "Luas Belah Ketupat: " << luas << " Cm " << endl;
}

void hitungLuasPersegi() {
    double sisi, luas;
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;
    luas = sisi * sisi;
    cout << "Luas Persegi: " << luas << " Cm " << endl;
}

void hitungLuasPersegiPanjang() {
    double panjang, lebar, luas;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    luas = panjang * lebar;
    cout << "Luas Persegi Panjang: " << luas << " Cm " << endl;
}

void hitungLuasLingkaran() {
    const float phi = 3.14;
    double radius, luas;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> radius;
    luas = phi * radius * radius;
    cout << "Luas Lingkaran: " << luas << " Cm " << endl;
}

void hitungLuasSegitiga() {
    double alas, tinggi, luas;
    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    luas = 0.5 * alas * tinggi;
    cout << "Luas Segitiga: " << luas << " Cm " << endl;
}


int main() {
    int pilihan;
    do {
        garis();
        cout << "======= MENU PROGRAM HITUNG LUAS BANGUN =======" << endl;
        garis();
        cout << "Pilih bangun datar yang ingin dihitung luasnya: " << endl;
        cout << "1. Hitung Luas Jajar Genjang" << endl;
        cout << "2. Hitung Luas Trapesium" << endl;
        cout << "3. Hitung Luas Belah Ketupat" << endl;
        cout << "4. Hitung Luas Persegi" << endl;
        cout << "5. Hitung Luas Persegi Panjang" << endl;
        cout << "6. Hitung Luas Lingkaran" << endl;
        cout << "7. Hitung Luas Segitiga" << endl;
        cout << "8. Keluar" << endl;
        garis();
        cout << "Masukkan pilihan Anda (1-8): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                hitungLuasJajarGenjang();
                break;
            case 2:
                hitungLuasTrapesium();
                break;
            case 3:
                hitungLuasBelahKetupat();
                break;
            case 4:
                hitungLuasPersegi();
                break;
            case 5:
                hitungLuasPersegiPanjang();
                break;
            case 6:
                hitungLuasLingkaran();
                break;
            case 7:
                hitungLuasSegitiga();
                break;
            case 8:
                cout << "Terima kasih telah menggunakan program ini!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 8);
    

    return 0;
}