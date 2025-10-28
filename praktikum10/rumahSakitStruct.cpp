#include <iostream>
#include <iomanip>
using namespace std;

struct Alamat {
    string jalan;
    string kota;
};

struct Pasien {
    string nama;
    string penyakit;
    Alamat alamat;
    int biaya;
};

int main()
{
    int jumlah, total = 0;
    
    // Input jumlah Pasien
    cout<<"================================="<<endl;
    cout<<"======= RUMAH SAKIT NGAWI ======="<<endl;
    cout<<"================================="<<endl;
    cout<<"Masukkan jumlah pasien: ";
    cin>>jumlah;
    cout<<endl;
    
    Pasien psn[jumlah];
    
    // Input data Pasien
    cout<<"+----------------------+"<<endl;
    cout<<"| Masukkan data pasien |"<<endl;
    cout<<"+----------------------+"<<endl;
    for(int i=0; i<jumlah; i++){
        cout<<"Pasien ke-"<<i + 1<<endl;
        cout<<"Nama             : ";
        cin>>psn[i].nama;
        cout<<"Penyakit         : ";
        cin>>psn[i].penyakit;
        cout<<"Alamat Jalan     : ";
        cin>>psn[i].alamat.jalan;
        cout<<"Alamat Kota      : ";
        cin>>psn[i].alamat.kota;
        cout<<"Biaya Perawatan  : ";
        cin>>psn[i].biaya;
        total += psn[i].biaya;
        cout<<"---------------------------"<<endl;
    }
    
    // daftar pasien
    cout<<endl;
    cout<<left<<setw(18)<<"Nama Pasien"<<setw(15)<<"Penyakit"<<setw(8)<<"Biaya"<<endl;
    cout<<"============================================="<<endl;
    for(int i=0; i<jumlah; i++){
        cout<<left<<setw(18)<<psn[i].nama<<setw(15)<<psn[i].penyakit<<setw(8)<<psn[i].biaya<<endl;
    } 
    
    // total biaya seluruh Pasien
    cout<<"============================================="<<endl;
    cout<<left<<setw(33)<<"Total seluruh pasien"<<setw(8)<<total;

    return 0;
}