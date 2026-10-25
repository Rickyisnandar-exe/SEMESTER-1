#include <iostream>
using namespace std;

int main () {
        int nilai, pilihan;
    cout << "masukkan nilai siswa :";
    cin >> nilai;

    if (nilai >= 90)
    {
        cout << "grade A" << endl;
    } else if (nilai >= 80)
    {
        cout << "grade B" << endl;
    } else if (nilai > 70 )
    {
        cout << "grade C" << endl;
    }else if (nilai > 67)
    {
        cout << "REMEDIAL";
    }else {
        cout << "SELAMAT ANDA REVISI";
    }

    cout << "masukkan pilihan anda (1-3) :";
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        cout << "NASI GORENG" << endl;
        break;
    case 2:
        cout << "NASI BAKAR" << endl;
        break;
    case 3:
        cout << "AYAM GULAI MADU" << endl;
        break;
    
    default:
        break;
    }

}