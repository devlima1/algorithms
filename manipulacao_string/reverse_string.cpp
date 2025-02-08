#include <stdio.h>

void reverse_string(char* str, int len) {
	int l = 0; // �ndice da esquerda
	int r = len - 1;  // �ndice da direita
	char temp;  // Vari�vel tempor�ria para troca de caracteres
	
	while(l < r) {
		temp = str[l];  // Armazena o caractere da posi��o esquerda
		str[l] = str[r];  // Coloca o caractere da posi��o direita na posi��o esquerda
		str[r] = temp;  // Coloca o caractere da posi��o esquerda na posi��o direita
		
		l++;  // Avan�a o �ndice esquerdo
		r--;  // Retorna o �ndice direito
	}
}

// Exemplo de uso
int main() {
	char str[] = "teste";
	int len = (sizeof(str) / sizeof(str[0]))- 1;
	
	reverse_string(str, len);
	printf("%s", str);
	
	return 0;
}
