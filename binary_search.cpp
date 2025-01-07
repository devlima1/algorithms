#include <stdio.h>

int binary_search(int arr[], int key, int len) {
	int l = 0; // início
	int r = len - 1; // fim
	int mid; // meio
	
	while (l <= r) { // enquanto houver elemento a verificar
		mid = (l + r) / 2; // calcula o meio
		
		if(key == arr[mid]) { // encontrado
			return mid;
		}else if(key > arr[mid]) { // está na metade superior
			l = mid + 1;
		}else { // está na metade inferior
			r = mid - 1;
		}
	}
	return -1; // não encontrado
}

// Exemplo de uso
int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	int result = binary_search(arr, 8, len);
	
	printf("%d", result);
	
	return 0;
}
