/*Nama File     : CekPrima.c*/
/*Deskripsi     : Mengecek apakah masukan integer adalah bilangan prima atau bukan*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Minggu, 27 03 2022 06:21 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
	int N;
    int i;
    int P;
	P = 0;

    //Algoritma
	printf("-----Program Mengecek Bilangan Prima-----\n");
    printf("=========================================\n");
	printf("\nMasukkan Bilangan Integer : ");
	scanf("%d", &N);

	if ( N <= 0) {
        printf("Bilangan harus positif");
	}
	else {
        for (i = 2; i < N; i++) {
            if (N % i == 0 ) {
                P = 1;
                break;
            }
        }
        if (P == 1) {
            printf("%d adalah bukan bilangan prima", N);
        }
        else {
            printf("%d adalah bilangan prima", N);
        }
	}
	return 0;
}