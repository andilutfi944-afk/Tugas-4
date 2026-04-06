#include <iostream>
using namespace std;

struct detailalamat
{
    string kota;
    string desa;
};

struct orang
{
    string nama;
    detailalamat alamat;
    int umur;
};

int main()
{
    orang mhs;

    cout << "nama: ";
    cin >> mhs.nama;

    cout << "alamat kota: ";
    cin >> mhs.alamat.kota;

    cout << "alamat desa: ";
    cin >> mhs.alamat.desa;

    cout << "umur: ";
    cin >> mhs.umur;

    cout << endl;

    // menampilkan
    cout << "nama: " << mhs.nama << endl;
    cout << "kota: " << mhs.alamat.kota << endl;
    cout << "desa: " << mhs.alamat.desa << endl;
    cout << "umur: " << mhs.umur << endl;
}