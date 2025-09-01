/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;

int main()
{
    string nama;
    int usia;

    cout << "Nama: ";
    cin >> nama;

    cout << "Usia: ";
    cin >> usia;

    cout << "Halo, " << nama << endl;
    cout << "Kamu sudah hidup selama " << usia << " tahun" << endl;
    
    return 0;
}