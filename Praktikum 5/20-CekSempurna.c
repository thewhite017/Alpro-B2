/*Nama File     : CekSempurna.c*/
/*Deskripsi     : Mengecek apakah masukan integer adalah bilangan sempurna atau bukan*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Minggu, 27 03 2022 06:21 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int N;
    int i;
    int b;
    b = 0;

    // Algoritma
	printf("-----Program Mengecek Bilangan Sempurna-----\n");
    printf("============================================\n");
    printf("\nMasukkan Bilangan Integer : ");
    scanf("%d", &N);

    if ( N <= 0) {
        printf("Bilangan harus positif");
    }
    else {
        for (i = 1; i < N; i++) {
            if (N % i == 0){
                b = b + i;
            }
        }
        if (N == b) {
            printf("%d adalah bilangan sempurna", N);
        }
        else {
            printf("%d adalah bukan bilangan sempurna", N);
        }
    }
    return 0;
}