/*Nama File     : CountingSort.c*/
/*Deskripsi     : Mengurutkan masukan integer dengan algoritma counting sorting*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Senin, 09 05 2022 18:21 WIB*/

#include <stdio.h>
#define RANGE 10000 /*nilai maksimal dari array*/

// Program Utama
int main(){
    // Kamus
	int N;
	int i;
	void CountingSort(int array[], int Length);
	void printArray(int array[], int Length);

    // Algoritma
	printf("-----Counting Sort-----\n");
    printf("=======================\n\n");
    printf("Jumlah bilangan dalam array : ");
    scanf("%d", &N);

	int arr[N]; /*deklarasi array*/

	printf("\nMasukkan bilangan-bilangan yang ingin diurutkan :\n");
	for(i = 0; i < N; i++){
		printf("Bilangan ke-%d = ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\nArray sebelum diurutkan : \n");
	printArray(arr, N);

	CountingSort(arr, N); /*memanggil countingSort untuk mengurutkan array*/

	printf("\nArray setelah diurutkan : \n");
	printArray(arr, N);

	return 0;
}

void CountingSort(int array[], int Length){
    // Kamus Lokal
    int i; /*counter loop*/
    int count[RANGE]; /*array untuk menghitung banyak elemen dalam array*/
    int index; /*index untuk menyusun array yang sudah urut*/

    // Algoritma
    for (i = 0; i < RANGE; i++){
        count[i] = 0;
    }

    for (i = 0; i < Length; i++){
        count[array[i]]++;
    }

    index = 0;

    /*menyusun array yang sudah terurut*/
    for (i = 0; i < RANGE; i++){
        while (count[i] > 0){
            array[index] = i;
            index++;
            count[i]--;
        }
    }
}

void printArray(int array[], int Length){ /*pencetak array*/
    // Kamus Lokal
	int i; /*counter*/

    // Algoritma
    for (i = 0; i < Length; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}
