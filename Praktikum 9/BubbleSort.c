/*Nama File     : BubbleSort.c*/
/*Deskripsi     : Mengurutkan masukan integer dengan algoritma bubble sorting*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Senin, 09 05 2022 18:21 WIB*/

#include <stdio.h>

// Program Utama
int main()
{
	// Kamus
	int N;
	int i;
	void swap(int* x, int* y);
	void BubbleSort(int array[], int Length);
	void printArray(int array[], int Length);

	// Algoritma
    printf("-----Bubble Sort-----\n");
    printf("=====================\n\n");
    printf("Jumlah bilangan dalam array : ");
    scanf("%d", &N);

	int arr[N]; /*deklarasi array*/

	printf("\nMasukkan bilangan-bilangan yang akan diurutkan :\n");
	for(i = 0; i < N; i++){
		printf("Bilangan ke-%d = ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\nArray sebelum diurutkan : \n");
	printArray(arr, N);

	BubbleSort(arr, N); /*memanggil bubbleSort untuk mengurutkan array*/

	printf("\nArray setelah diurutkan : \n");
	printArray(arr, N);

	return 0;
}

void swap(int* x, int* y){ /*prosedur untuk menukar posisi masukan*/
    // Kamus lokal
	int temp; /*variabel penampung sementara*/

    // Algoritma
	temp = *x;
	*x = *y;
	*y = temp;
}

void BubbleSort(int array[], int Length){
    // Kamus lokal
	int i; /*counter sorting*/
	int j; /*counter perbandingan 2 bilangan*/

    // Algoritma
	for (i = 0; i < Length - 1; i++){
		for (j = 0; j < Length - i - 1; j++){
			if (array[j] > array[j + 1]){
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

void printArray(int array[], int Length){ /*pencetak array*/
    // Kamus lokal
	int i; /*counter*/

    // Algoritma
	for (i = 0; i < Length; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}
