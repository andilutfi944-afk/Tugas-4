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

int main(){
    Orang mhs[3];
    for (int i = 0; i <= 2; i++)
    {
        cout <<"Nama : ";
        getline(cin, mhs[i].nama);
        cout <<"Alamat Desa : ";
        getline(cin, mhs[i].alamat.desa);
        cout <<"Alamat Kota : ";
        getline(cin, mhs[i].alamat.kota);
        cout <<"Umur : ";
        cin>>mhs[i].umur;
        cout<<endl;
        cin.ignore();
    }
}