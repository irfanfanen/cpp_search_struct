#include<iostream>
#include<string>
 
using namespace std;
 
typedef struct {
    int nim;
    char nama[100];
}mahasiswa;
 
mahasiswa mhs[100];

int 
    i = 0,
    jumlah_mhs,
    search,
    nim
;

char 
    nama[100]
;

bool 
    found = false
;

int main() {

    cout<<"Masukan Jumlah mahasiswa : "; cin>>jumlah_mhs; cout<<endl;

    for(int i =0; i<jumlah_mhs; i++) {
        cout<<"Mahasiswa ke : "<<i+1; cout<<endl;
        cout<<"Nama : "; cin>>mhs[i].nama; 
        cout<<"NIM : "; cin>>mhs[i].nim; cout<<endl;
    }
 
    cout<<"Cari Berdasarkan NIM : "; cin>>search; cout<<endl;

    while ((i<10)&(!found)) {
        if (mhs[i].nim== search)
        found=true;
        else
        i=i+1;
    } 

    if(found){
        cout<<"Pencarian : "<<search; cout<<endl;
        cout<<"Nama : "<<mhs[i].nama; cout<<endl;
        cout<<"Nim : "<<mhs[i].nim; cout<<endl;
    }else {
        cout<<"Pencarian : "<<search; cout<<endl;
        cout<<"Tidak ada"; cout<<endl;
    }
}