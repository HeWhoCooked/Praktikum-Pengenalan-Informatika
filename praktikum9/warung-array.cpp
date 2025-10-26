#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int jumlah;
    
    cout<<"==================================="<<endl;
    cout<<"======== Warung Pak Bahlil ========"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Masukkan jumlah barang: ";
    cin>>jumlah;
    cout<<endl;
    
    string barang[jumlah][3];
    
    for(int i=0; i<jumlah; i++){
        cout<<"Barang ke-"<<i + 1<<endl;
        cout<<"Nama barang: ";
        cin>>barang[i][0];
        cout<<"Stok       : ";
        cin>>barang[i][1];
        cout<<"Harga      : ";
        cin>>barang[i][2];
        cout<<"------------------------------"<<endl;
    }
    
    cout<<left<<setw(15)<<"Nama Barang"<<setw(8)<<"Stok"<<setw(8)<<"Harga"<<endl;
    cout<<"==================================="<<endl;
    for(int i=0; i<jumlah; i++){
        cout<<left<<setw(15)<<barang[i][0]<<setw(8)<<barang[i][1]<<setw(8)<<barang[i][2]<<endl;
    }

    return 0;
}