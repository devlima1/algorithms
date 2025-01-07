#include <stdio.h>

int bubble_sort(int arr[], int len) {
	int swap, temp; // controle de troca e variável auxiliar
	
	for (int i = 0; i < len - 1; i++) { // loop externo
		swap = 0; // reinicia o controle de troca
		
		for (int j = 0; j < len - i - 1; j++) { // loop interno
			if (arr[j] > arr[j + 1]) { // troca se necessário
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swap++; // houve troca
			}
		}	
		
		if (swap == 0) { // termina se não houver trocas
			break;
		}
	}
	return 0;
}

// Exemplo de uso
int main() {
	int arr[] = {8, 5, 7, 3, 2};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	bubble_sort(arr, len);
	
	for(int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
