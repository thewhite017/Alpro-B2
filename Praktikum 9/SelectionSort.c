/*Nama File     : SelectionSort.c*/
/*Deskripsi     : Mengurutkan masukan integer dengan algoritma selection sorting*/
/*Pembuat       : Daffa Aulia Rizky Karunia - 24060121130070*/
/*Tgl Pembuatan : Senin, 09 05 2022 18:21 WIB*/

#include <stdio.h>

// Program Utama
int main(){
    // Kamus
	int N;
	int i;
	void swap(int* x, int* y);
	void SelectionSort(int array[], int Length);
	void printArray(int array[], int Length);

    // Algoritma
    printf("-----Selection Sort Program-----\n");
    printf("================================\n\n");
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

	SelectionSort(arr, N); /*memanggil selectionSort untuk mengurutkan array*/

	printf("\nArray setelah diurutkan : \n");
	printArray(arr, N);

	return 0;
}

void swap(int* x, int* y){
    // Kamus lokal
	int temp; /*variabel penampung sementara*/

    // Algoritma
	temp = *x;
	*x = *y;
	*y = temp;
}

void SelectionSort(int array[], int Length){
    // Kamus Lokal
	int i; /*counter sorting*/
	int j; /*counter pencarian elemen terkecil*/
	int smallest; /*elemen terkecil dalam array*/

    // Algoritma
	/*sorting dari array yang belum urut*/
	for (i = 0; i < Length-1; i++){
		smallest = i;

		/*looping mencari elemen terkecil dari array yang belum urut*/
		for (j = i+1; j < Length; j++){
			if (array[j] < array[smallest])
				smallest = j;
		}

		/*menukar posisi elemen terkecil dengan elemen pertama*/
		swap(&array[smallest], &array[i]);
	}
}

void printArray(int array[], int Length){
    // Kamus lokal
	int i; /*counter*/

    // Algoritma
	for (i = 0; i < Length; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}
