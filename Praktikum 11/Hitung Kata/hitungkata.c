/*Nama File     : hitungkata.c*/
/*Deskripsi     : Mesin abstrak untuk menghitung banyaknya kata dalam sebuah pita*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Rabu, 18 05 2022 08:45 WIB*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
    /*Kamus*/
    char Kata[100];
    int Count_Kata;
    int Banyak_Char;
    int i;

    /*Algoritma*/
    printf("-----Mesin Abstrak-----\n");
    printf("------Hitung Kata------\n");
    printf("=======================\n\n");
    Banyak_Char = HitungChar();

    START();
    i=0;
    while(!EOP()){
        Kata[i] = CC;
        ADV();
        i++;
    }
    Kata[i]='.';

    printf("Pita = ");
    for (int i = 0; i <= Banyak_Char; i++)
    {
        printf("%c", Kata[i]);
    }
    printf("\n");

    for (int i = 1; i <= Banyak_Char; i++)
    {
        if ((IsChar(Kata[i-1])&&Kata[i]==' ')||(IsChar(Kata[i-1])&&Kata[i]=='.'))
        {
            Count_Kata+=1;
        }
    }

    printf("Jumlah kata dalam pita = %i\n\n", Count_Kata);
    printf("=======================");
    getch();
    return 0;
}
