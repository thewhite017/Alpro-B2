/*Nama File     : CekSeriPositif.c*/
/*Deskripsi     : Menghitung total tahanan jika dirangkai seri dan mengecek apabila tahanan tersebut positif atau tidak*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Minggu, 13 03 2022 07:27 WIB*/

#include <stdio.h>

int main()
{

    //Kamus
    float t1,t2,t3,total;

    //Algoritma
    printf("-----Pengecekan Seri Positif-----\n");
    printf("\nMasukkan bilangan : ");
    scanf("%f", &t1);
    printf("Masukkan bilangan : ");
    scanf("%f", &t2);
    printf("Masukkan bilangan : ");
    scanf("%f", &t3);
    if (t1 >= 0 && t2 >= 0 && t3 >= 0){
            total = t1 + t2 + t3;
            printf("\nTotal tahanan jika dirangkai seri adalah %.2f\n",total);
    }
    else{
        printf("\nMasukan tahanan tidak boleh negatif");
    }
}
