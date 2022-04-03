/*Nama File     : Tetris1.c*/
/*Deskripsi     : menampilkan susunan karakter * sesuai dengan susunan. Tinggi berdasarkan N > 0*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Minggu, 03 04 2022 09:56 WIB*/

#include <stdio.h>
#include <stdlib.h>

// Program Utama
int main()
{
   //Kamus
   int N;
   int i;
   int j;

   //Algoritma
   printf("-----Program Membuat Tetris-----\n");
   printf("================================\n\n");
   printf("Masukkan jumlah baris : ");
   scanf("%d", &N);
   printf("\n");
   if (N <= 0){
        printf("N harus integer positif\n");
    }
    else{
        for(i=1; i<=N; i++){        //Baris
            for(j=1; j<=i; j++){    //Kolom
                printf("*");
            }
        printf("\n");
        }
        for(i=N-1; i>=1; i--){      //Baris
            for(j=1; j<=i; j++){    //Kolom
                printf("*");
            }
        printf("\n");
        }
    }
   return 0;
}
