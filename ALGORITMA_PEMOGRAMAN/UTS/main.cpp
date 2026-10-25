#include <stdio.h>

int main() {
    char nama [50];
    int umur;
    float tinggi; 

    printf("masukkan nama anda :");
    fgets(nama, sizeof(nama),stdin);

    printf("masukkan umur anda :");
    scanf("%d", &umur);

    printf("masukkan tinggi anda :");
    scanf("%f", &tinggi);

    printf("======Nama siswa=====\n");
    printf("Nama : %s", nama);
    printf("Umur :%d\n", umur);
    printf("Tingi : %.2f", tinggi);
    return 0;

}

