/*Nama File     : TarifPLN.c*/
/*Deskripsi     : Menghitung tariff PLN untuk 2 golongan dengan input penggunaan daya*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Jumat, 18 03 2022 21:33 WIB*/

#include <stdio.h>

int main()
{
    //Kamus
    int gol;
    int daya;
    int tarif;

    // Algoritma
    printf("-----Program Menghitung Tarif PLN-----\n");
    printf("\nMasukkan golongan (1 - 2) = ");
    scanf("%d", &gol);
    printf("Masukkan daya = ");
    scanf("%d", &daya);

    if (gol == 1){
        if (daya > 0 && daya <= 100){
            tarif =  100*1000;
        }
        else if (daya > 100 && daya < 1000){
            tarif = daya*1000;
        }
        else if (daya >= 1000){
            tarif = (daya*1000) + (daya*1000*10/100);
        }
        else{
             printf("Daya harus diatas 0\n");
        }
    }
    else if(gol == 2){
        if (daya > 0 && daya <= 100){
            tarif = 100*2000;
        }
        else if(daya > 100 && daya < 1000){
            tarif = daya*2000;
        }
        else if (daya >= 1000){
            tarif = (daya*2000) + (daya*2000*10/100);
        }
        else{
            printf("Daya harus diatas 0\n");
        }
    }
    printf("\nGolongan %d, pemakaian %d kWh, maka jumlah bayarnya adalah %d", gol, daya, tarif);
}
