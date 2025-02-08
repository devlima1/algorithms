#include <stdio.h>

int remove_duplicates(int* arr, int len) {
	int i = 0;	// Índice para acompanhar a posição onde o próximo valor único será armazenado
	
	
	for (int j = 1; j < len; j++) {	// Percorre o array começando do segundo elemento
		if (arr[i] != arr[j]) {	// Se o valor atual não for igual ao valor anterior, é um valor único
			i = i + 1;	// Avança o índice i para armazenar o próximo valor único
			arr[i] = arr[j];	// Armazena o valor único na posição i
		}
	}
	return i + 1;  // Retorna o novo tamanho do array sem duplicatas (i + 1, pois i é o índice)
}

// Exemplo de uso
int main (){
	int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	int new_len = remove_duplicates(arr, len);
	for (int i = 0; i < new_len; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
