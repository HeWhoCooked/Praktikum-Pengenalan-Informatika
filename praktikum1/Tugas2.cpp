#include<iostream>
using namespace std;

int main()
{
    float panjang, lebar, luas;
    
    cout << "Menghitung Luas Persegi Panjang." << endl;
    cout << "Panjang: ";
    cin >> panjang;
    
    cout << "Lebar: ";
    cin >> lebar;
    
    luas = panjang * lebar;
    
    cout << "Lebar persegi panjang nya adalah " << luas << endl;
    
    return 0;
}
