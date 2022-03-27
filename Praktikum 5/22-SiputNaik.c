/*Nama File     : SiputNaik.c*/
/*Deskripsi     : Menghitung hari yang dibutuhkan siput untuk mencapai ketinggian N dari dasar lubang*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Minggu, 27 03 2022 06:21 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    float N; //kedalaman lubang sedalam N meter
    float tinggi; //tinggi siput dari dasar lubang
    int h; //hari yang dibutuhkan siput untuk mencapai N meter

    //Algoritma
    printf("-----Program Siput Naik-----\n");
    printf("============================\n");
    printf("\nMasukkan kedalaman lubang  = ");
    scanf("%f", &N);

    if (N <= 0){
        printf("Kedalaman lubang harus positif");
    }

    else{
        h = 0;
        tinggi = 0;
        while (tinggi >= 0 && tinggi < N ){
            tinggi = tinggi + 0.3;
            if (tinggi < N){
                tinggi = tinggi - 0.1;
            }
            h = h + 1;
        }

        printf("Waktu yang dibutuhkan oleh siput adalah %d hari", h);
    }
    return 0;
}