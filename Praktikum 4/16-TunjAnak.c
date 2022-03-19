/*Nama File     : TunjAnak.c*/
/*Deskripsi     : Menghitung besar tunjangan anak berdasarkan jumlah anak dan gaji pokok orang tua*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Jumat, 18 03 2022 21:33 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int ja, gp, ta;

    //Algoritma
    printf("-----Program Menghitung Tunjangan Anak-----\n");
    printf("\nMasukkan jumlah anak = ");
    scanf("%d", &ja);
    printf("Masukkan gaji pokok = ");
    scanf("%d", &gp);
    if (ja >= 0 && gp > 0){
        if (ja < 3){
            ta = ja*(0.1*gp);
            printf("\nJumlah anak = %d dan Gaji pokok = %d, maka tunjangan anak adalah %d", ja, gp, ta);
        }
        else{
            ta = 3*(0.1*gp);
            printf("\nJumlah anak = %d dan Gaji pokok = %d, maka tunjangan anak adalah %d", ja, gp, ta);
        }
    }
    else{
        printf("\nMasukan tidak boleh negatif");
    }
    return 0;
}
