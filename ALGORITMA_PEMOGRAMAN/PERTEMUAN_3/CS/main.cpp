#include<iostream>
using namespace std;


// int main ( ) {
//     int A = 5, B = 7;

//     if (A < B) {
//         cout << "jakarta"; // jika kondisi benar
//     }
//     else {
//         cout << "bandung";
//     }
//     cout << "\nselesai"; // lanjutan intruksi
//     return 0; 
// }


// int main () {
//     int nilai;

//     cout << "masukkan nilai     :";
//     cin >> nilai;

//     if (nilai >= 60)
//     {
//         cout << "selamat anda lulus";
//     }else {
//         cout << "maaf anda gagal (REVISI!!!)";
//     }
    
// }

#include <iostream>
using namespace std;

int main() {
    int bil1, bil2;

    // 1. Input dua bilangan bulat
    cout << "Masukkan bilangan pertama : ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua   : ";
    cin >> bil2;

    // 2. Logika mengecek nilai terbesar
    if (bil1 > bil2) {
        cout << "Nilai terbesar adalah    : " << bil1 << endl;
    } else if (bil2 > bil1) {
        cout << "Nilai terbesar adalah    : " << bil2 << endl;
    } else {
        cout << "Kedua bilangan bernilai sama (" << bil1 << ")" << endl;
    }

    return 0;
}
