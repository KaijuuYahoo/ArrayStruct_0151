#include <iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
};
int main(){
    //Membuat object struct mahasiswa
    mahasiswa mhs;

    //Mengakses Struct mahasiswa
    mhs.nim = "20240140151";
    mhs.nama = "Aqim";
    mhs.alamat = "Sukoharjo";

    cout<< "Masukkan NIM = ";
    cin >> mhs.nim;
    cout<< "Masukkan NAMA = ";
    cin >> mhs.nama;
    cout<< "Masukkan ALAMAT = ";
    cin >> mhs.alamat;


    cout<<endl;

    
    cout<< "NIM = " << mhs.nim << endl;
    cout << "NAMA = " << mhs.nama << endl;
    cout << "ALAMAT = " << mhs.alamat << endl;
}