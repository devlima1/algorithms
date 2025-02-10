#include <stdio.h>

int bubble_sort(int* arr, int len) {
	int i, j, temp, swap;
	
	for(i = 0; i < len - 1; i++){
		swap = 0;	// Contador de trocas
		
		for(j = 0; j < len - 1- i; j++) {	// Percorre o array, comparando elementos adjacentes
			if(arr[j] > arr[j + 1]) {	// Se o elemento atual for maior que o próximo, troca os elementos
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swap++;	// Incrementa o contador de trocas
			}
		}
		
		if (swap == 0) {	// Se não houve trocas, o array já está ordenado
			return 0;
		}
	}
}

// Exemplo de uso
int main() {
	int arr[] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	bubble_sort(arr, len);
	for(int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
