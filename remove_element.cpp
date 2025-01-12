#include <stdio.h>

int remove_element(int arr[], int len, int element){
	int k = 0; // ponteiro de ajuste
	
	for (int i = 0; i < len; i++) { // percorre o array
		if (arr[i] != element) { // copia apenas os diferentes 	do elemento
			arr[k] = arr[i];
			k++;
		}
	}
	return k; // novo tamanho do array
}

// Exemplo de uso
int main() {
	int arr[] = {0, 1, 2, 2, 3, 0, 4, 2};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	int new_len = remove_element(arr, len, 2);
	
	for (int i = 0; i < new_len; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
