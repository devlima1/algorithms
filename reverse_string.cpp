#include <stdio.h>

void reverse_string(char str[], int len) {
	int l = 0; // in�cio
	int r = len - 1; // fim
	char temp; // auxiliar
	
	while (l < r) { // troca os extremos
		temp = str[l];
		str[l] = str[r];
		str[r] = temp;
		
		l++; // avan�a in�cio
		r--; // recua fim
	}
}

// Exemplo de uso
int main() {
	char str[] = "teste";
	int len = sizeof(str) / sizeof(str[0]) - 1; // comprimento (sem '\0')
	
	reverse_string(str, len);
	
	printf(str);
	
	return 0;
}
