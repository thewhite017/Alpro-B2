/*Nama File     : InsertionSort.c*/
/*Deskripsi     : Mengurutkan masukan integer dengan algoritma insertion sorting*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Senin, 09 05 2022 18:21 WIB*/

#include <stdio.h>
#include <math.h>

// Program Utama
int main(){
    // Kamus
	int N;
	int i;
	void InsertionSort(int array[], int Length);
	void printArray(int array[], int Length);

    // Algoritma
	printf("-----Insertion Sort-----\n");
	printf("========================\n\n");
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

	InsertionSort(arr, N); /*memanggil insertionSort untuk mengurutkan array*/

	printf("\nArray setelah diurutkan : \n");
	printArray(arr, N);

	return 0;
}

void InsertionSort(int array[], int Length){
    // Kamus Lokal
	int i; /*counter loop sorting*/
	int j; /*counter posisi*/
	int center; /*variabel elemen yang menjadi poros*/

    // Algoritma
	for (i = 1; i < Length; i++){
		/*menentukan elemen untuk menjadi poros*/
		center = array[i];

		j = i - 1;

		/*memindahkan posisi elemen yang bernilai lebih besar dari center ke posisi kanan center*/
		while (j >= 0 && array[j] > center){
			array[j + 1] = array[j];
			j -= 1;
		}

		/*center dipindahkan ke posisi yang seharusnya setelah sorting*/
		array[j + 1] = center;
	}
}

void printArray(int array[], int Length){ /*prosedur untuk mencetak array*/
    // Kamus Lokal
	int i; /*counter*/

    // Algoritma
	for (i = 0; i < Length; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}
