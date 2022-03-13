/*Nama File     : CekBulan.c*/
/*Deskripsi     : Menampilkan nama bulan berdasarkan angka b yang diberikan*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Minggu, 13 03 2022 07:14 WIB*/

#include<stdio.h>

int main ()
{
    //Kamus
    int b;

    //Algoritma
    printf("-----Pengecekan Nama Bulan-----\n");
    printf("\nMasukkan nomor bulan : ");
    scanf ("%d", &b);

    switch (b) {
        case 1 :
            printf("\nJanuari\n");
            break;
        case 2 :
            printf("\nFebruari\n");
            break;
        case 3 :
            printf("\nMaret\n");
            break;
        case 4 :
            printf("\nApril\n");
            break;
        case 5 :
            printf("\nMei\n");
            break;
        case 6 :
            printf("\nJuni\n");
            break;
        case 7 :
            printf("\nJuli\n");
            break;
        case 8 :
            printf("\nAgustus\n");
            break;
        case 9 :
            printf("\nSeptember\n");
            break;
        case 10 :
            printf("\nOktober\n");
            break;
        case 11 :
            printf("\nNovember\n");
            break;
        case 12 :
            printf("\nDesember\n");
            break;
        default:
        printf("\nMasukan nomor bulan tidak tepat\n");
        }
    return 0;
}
