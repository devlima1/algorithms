#include <stdio.h>

bool two_sum_ii(int arr[], int target, int len, int* index1, int* index2) {

	int l = 0; // início
	int r = len - 1; // fim
	
	while (l < r) { // enquanto houver elementos a verificar
		int sum = arr[l] + arr[r]; // soma os extremos
		
		if (sum == target) { // encontrou o par
			*index1 = l;
			*index2 = r;
			return true;
		} else if(sum > target) { // soma maior, ajusta fim
			r--;
		} else { // soma menor, ajusta início
			l++;
		}
	}
	return false; // nenhum par encontrado
}

// Exemplo de uso
int main() {
	int arr[] = {2, 7, 11, 15};
	int target = 9;
	int len = sizeof(arr) / sizeof(arr[0]);
	int index1, index2;
	
	if (two_sum_ii(arr, target, len, &index1, &index2)) {
		printf("[%d, %d]", index1, index2);
	} else {
		printf("Nenhum par encontrado.");
	}
	
	return 0;
}
