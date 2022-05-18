/*Nama File     : palindrom.c*/
/*Deskripsi     : Mesin abstrak untuk */
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Rabu, 18 05 2022 21:47 WIB*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    char Kata[50];
    int Panjang_Pita;
    int i;
    int cek;

/*Algoritma*/
    printf("-----Mesin Abstrak-----\n");
    printf("-------Palindrom-------\n");
    printf("=======================\n\n");
    printf("Pita = ");
    Panjang_Pita = HitungChar();

    START();
    i=0;
    while(!EOP()){
        Kata[i] = CC;
        ADV();
        i++;
    }

    for (int i = 0; i < Panjang_Pita; i++)
    {
        printf("%c", Kata[i]); //Pita
    }

    cek = Palindrom(Kata);
    printf("\nCek Palindrom..... ");
    if (cek == 1)
    {
        printf("\nResult = Palindrom");
    }
    else{
        printf("\nResult = Bukan Palindrom");
    }
    printf("\n\n=======================");
    getch();
    return 0;
}
