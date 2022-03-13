/*Nama File     : CekHari.c*/
/*Deskripsi     : Menampilkan nama hari berdasarkan angka h yang diberikan*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Minggu, 13 03 2022 06:23 WIB*/

#include<stdio.h>

int main ()
{
    //kamus
    int h;

    //Algoritma
    printf("-----Pengecekan Nama Hari-----\n");
    printf("\nMasukkan nomor hari : ");
    scanf ("%d", &h);

    switch (h) {
        case 1 :
            printf("\nSenin\n");
            break;
        case 2 :
            printf("\nSelasa\n");
            break;
        case 3 :
            printf("\nRabu\n");
            break;
        case 4 :
            printf("\nKamis\n");
            break;
        case 5 :
            printf("\nJumat\n");
            break;
        case 6 :
            printf("\nSabtu\n");
            break;
        case 7 :
            printf("\nMainggu\n");
            break;
        default:
        printf("\nMasukan nomor bulan tidak tepat\n");
        }
    return 0;
}
