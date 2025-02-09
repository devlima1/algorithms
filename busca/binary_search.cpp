#include <stdio.h>

int binary_search(int* arr, int len, int key) {
	int l = 0;	// In�cio do intervalo de busca
	int r = len - 1;	// Fim do intervalo de busca
	int mid;	// Ponto m�dio do intervalo
	
	while(l <= r) {
		mid = (l + r) / 2;	// Calcula o ponto m�dio
		
		if(arr[mid] == key) {
			return mid;	// Elemento encontrado, retorna o �ndice
		}else if(arr[mid] > key) {
			r = mid - 1;	// Busca na metade esquerda
		}else {
			l = mid + 1;	// Busca na metade direita
		}
	}
	return -1;	// Elemento n�o encontrado
}

// Exemplo de uso
int main() {
	int arr[] = {3, 6, 8, 12, 14, 17, 25, 29, 31, 36, 42, 47, 53, 55, 62};
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 42;
	
	int result = binary_search(arr, len, key);
	printf("%d", result);
	
	return 0;
}
