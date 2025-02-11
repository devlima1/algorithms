#include <stdio.h>

int insertion_sort(int* arr, int len) {
	int i, j, temp;
	
	for(i = 1; i < len; i++) {	// Percorre o array a partir do segundo elemento (índice 1)
		j = i - 1;	// Inicia a comparação com o elemento anterior
		temp = 	arr[i];	// Armazena o valor atual para inserção
		
		while(j >= 0 && arr[j] > temp) {	// Desloca os elementos maiores que 'temp' para a direita
			arr[j + 1] = arr[j];	// Desloca o elemento
			j--;	// Move para o elemento anterior
		}
		arr[j + 1] = temp;	// Insere 'temp' na posição correta
	}
	return 0;	// Retorna 0 indicando sucesso
}

// Exemplo de uso
int main() {
	int arr[] = {3, 0, 1, 8, 7, 2, 5, 4, 9, 6};
	int len = sizeof(arr) / sizeof(arr[0]); 
	
	insertion_sort(arr, len);
	for(int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
