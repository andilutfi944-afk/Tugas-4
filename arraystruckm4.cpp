#include<iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct Orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {
    Orang mhs;
    cout << "Nama : ";
    getline(cin, mhs.nama);
    cout << "Alamat Desa : ";
    getline(cin, mhs.alamat.desa);
    cout << "Alamat Kota : ";
    getline(cin, mhs.alamat.kota);
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
    // tampilkan
    cout << " Nama : " << mhs.nama << endl;
    cout << " Desa : " << mhs.alamat.desa << endl;
    cout << " Kota : " << mhs.alamat.kota << endl;
    cout << " Umur : " << mhs.umur << endl;
}