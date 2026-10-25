#include <iostream>
#include <string>
using namespace std;

int main () {

    int a, b, umur;
    string nama;
    float tinggi;
    
    cout << "masukan angka (a) : ";
    cin >> a;

    cout << "masukkan angka (b) :  ";
    cin >> b;

    cout << "============== TABEL PERHITUNGAN DALAM BAHASA C ==============" << endl;
    cout << a << "+" << b << "=" << (a + b) << endl;
    cout << a << "-" << b << "=" << (a - b) << endl;
    cout << a << "x" << b << "=" << (a * b) << endl;
    cout << a << "/" << b << "=" << (a / b) << endl;
    cout << a << "%" << b << "=" << (a % b) << endl;

    cin.ignore();
    cout << "masukkan nama anda :";
    getline(cin, nama);
    cout << "masukkan umur anda :";
    cin >> umur;
    cout << "masukkan tinggi badan anda :";
    cin >> tinggi;

    cout << "====== DATA SISWA =====" << endl;
    cout << "Nama       :" << nama << endl;
    cout << "Umur       :" << umur << "Tahun" << endl;
    cout << "Tinggi     :" << tinggi << "cm" << endl;

     // Aplikasi kasir kecil kecilan 
        string nama;
    int jumlah_barang;
    double harga_barang, total_harga, total_diskon, total_bayar;

    cout << "masukkan nama pembeli :";
    getline(cin,nama);

    cout << "masukkan harga barang :";
    cin >> harga_barang;

    cout << "masukkan jumlah barang :";
    cin >> jumlah_barang;
    
    total_harga = harga_barang * jumlah_barang;
    total_diskon = total_harga * 0.10;
    total_bayar = total_harga - total_diskon;

    cout << "====== total belanja =====" << endl;
    cout << "nama pemebeli :" << nama << endl;
    cout << "Total harga :" << total_harga << endl;
    cout << "Total Diskon :" << total_diskon << endl;
    cout << "Total bayar :" << total_bayar << endl;

    // belajar if - else if - else 

}

