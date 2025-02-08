#include <stdio.h>

int remove_duplicates(int* arr, int len) {
	int i = 0;	// �ndice para acompanhar a posi��o onde o pr�ximo valor �nico ser� armazenado
	
	
	for (int j = 1; j < len; j++) {	// Percorre o array come�ando do segundo elemento
		if (arr[i] != arr[j]) {	// Se o valor atual n�o for igual ao valor anterior, � um valor �nico
			i = i + 1;	// Avan�a o �ndice i para armazenar o pr�ximo valor �nico
			arr[i] = arr[j];	// Armazena o valor �nico na posi��o i
		}
	}
	return i + 1;  // Retorna o novo tamanho do array sem duplicatas (i + 1, pois i � o �ndice)
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
