/*Nama File     : inverse.c*/
/*Deskripsi     : Mesin abstrak untuk menampilkan inverse/kebalikan sebuah kalimat*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Rabu, 18 05 2022 19:44 WIB*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    int Panjang_Pita;
    char Pita[100];
    int i;

/*Algoritma*/
    printf("-----Mesin Abstrak-----\n");
    printf("--------Inverse--------\n");
    printf("=======================\n\n");
    Panjang_Pita = HitungChar();

    if (Panjang_Pita >= 100)
    {
        printf("karakter dalam pita melebihi batas maksimal (max 100)");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            Pita[i] = CC;
            ADV();
            i++;
        }

        printf("Pita = ");
        for (int i = 0; i < Panjang_Pita; i++)
        {
            printf("%c", Pita[i]);
        }

        printf("\nPita Inverse = ");
        for (int i = Panjang_Pita-1; i >= 0; i--)
        {
            printf("%c", Pita[i]);
        }

    }
    printf("\n\n=======================");
    getch();
    return 0;
}
