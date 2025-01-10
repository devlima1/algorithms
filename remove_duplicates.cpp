#include <stdio.h>

int remove_duplicates(int arr[], int len) {
	int i = 0; // ponteiro fixo
	
	for (int j = 1; j < len; j++) { // percorre o array
		if (arr[i] != arr[j]) { // copia os valores diferentes
			i++;
			arr[i] = arr[j];
		}
	}
	return i + 1; // novo tamanho do array
}

// Exemplo de uso
int main() {
	int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	int new_len = remove_duplicates(arr, len);
	
	for (int i = 0; i < new_len; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
