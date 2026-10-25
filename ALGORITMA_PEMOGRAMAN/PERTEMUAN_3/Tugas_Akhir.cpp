#include <stdio.h>

int main() {
    int kode;

    printf("Masukkan kode : ");
    scanf("%d", &kode);

    if (kode == 1) {
        printf("Hari = Senin\n");
    } else if (kode == 2) {
        printf("Hari = Selasa\n");
    } else if (kode == 3) {
        printf("Hari = Rabu\n");
    } else if (kode == 4) {
        printf("Hari = Kamis\n");
    } else if (kode == 5) {
        printf("Hari = Jumat\n");
    } else if (kode == 6) {
        printf("Hari = Sabtu\n");
    } else if (kode == 7) {
        printf("Hari = Minggu\n");
    } else {
        printf("Pilihannya tidak ada\n");
    }

    printf("Kode = %d\n", kode);

    return 0;
}