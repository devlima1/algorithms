#include <stdio.h>

int remove_element(int* arr, int len, int element) {
	int j = 0;  // �ndice para armazenar elementos que n�o s�o iguais ao 'element'
	
	for(int i = 0; i < len; i++) {
		if(arr[i] != element) {  // Se o elemento n�o for igual ao 'element', mant�m no array
			arr[j] = arr[i];  // Coloca o valor na posi��o j
			j++;  // Avan�a o �ndice j
		}
	}
	return j;  // Retorna o novo tamanho do array (sem o elemento removido)
}

// Exemplo de uso
int main() {
	int arr[] = {0, 1, 2, 2, 3, 0, 4, 2};
	int len = sizeof(arr) / sizeof(arr[0]);
	int element = 2;
	
	int new_len = remove_element(arr, len, element);
	for (int i = 0; i < new_len; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
