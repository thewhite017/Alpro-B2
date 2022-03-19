/*Nama File     : FaktorBil.c*/
/*Deskripsi     : Menentukan faktor dari sebuah bilangan integer positif*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Jumat, 18 03 2022 21:33 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int i, N;

    //Algoritma
    printf("-----Program Menghitung Faktor Integer-----\n");
    printf("\nMasukkan sebuah bilangan : ");
    scanf("%d", &N);

    if (N <= 0){
          printf("N harus positif");
    }
    else {
    	printf("N = %d, faktor bilangannya adalah", N);
    }
       {
       	for(i=1; i<=N; i++){
            if (N%i==0){
            printf(" %d,",  i);
       }

            }
       }
       return 0;
}
