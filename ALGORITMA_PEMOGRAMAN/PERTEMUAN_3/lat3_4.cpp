#include <stdio.h>

int main() {
    int nilai;
    char huruf;

    printf("Masukkan nilai : ");
    scanf("%d", &nilai);

    if (nilai >= 81 && nilai <= 100) {
        huruf = 'A';
    } else if (nilai >= 71 && nilai < 81) {
        huruf = 'B';
    } else if (nilai >= 61 && nilai < 71) {
        huruf = 'C';
    } else if (nilai >= 51 && nilai < 61) {
        huruf = 'D';
    } else {
        huruf = 'E';
    }

    printf("Nilai angka : %d\n", nilai);
    printf("Nilai huruf : %c\n", huruf);

    return 0;
}