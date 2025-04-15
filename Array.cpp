#include <iostream>
using namespace std;

//Deklarasi array tanpa ukuran,wajib diisi data
int nilai[]= {1,2,3};
//Dekarasi array dengan ukuran, tidak wajib diisi data
int  skor[4]={12,24,48,64};
//Deklarasi array dengan ukuran, tidak wajib diisi data
string nama[3];
int main(){
    //Menampilkan isi array pada index tertentu
    cout << "Tampilkan skor ke - 3 = " << skor[2] << endl;
    ///Mengisi array pada index tertentu
    skor[2]=100;
    cout << "Tampilkan skor ke - 3 = " << skor[2] << endl;
    //Mengisi array dengan loop for
    for(int n=0;n<3;n++){
        cout << "Mahasiswa ke-" << n+1 << endl;
        cout << "Nama Mahasiswa = ";
        cin >> nama[n];
    }
    cout<<endl;
    //Menampilkan isi array 
    cout << "Tampilkan skor ke - 3 = " << skor[2] << endl;

    //Mengisi array dengan loop for
    for(int n=0;n<3;n++){
        cout << "Datas ke-" << n+1 << endl;
        cout << "Data Mahasiswa = " << nama[n] << endl;
    }
};
