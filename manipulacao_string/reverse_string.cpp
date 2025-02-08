#include <stdio.h>

void reverse_string(char* str, int len) {
	int l = 0; // Índice da esquerda
	int r = len - 1;  // Índice da direita
	char temp;  // Variável temporária para troca de caracteres
	
	while(l < r) {
		temp = str[l];  // Armazena o caractere da posição esquerda
		str[l] = str[r];  // Coloca o caractere da posição direita na posição esquerda
		str[r] = temp;  // Coloca o caractere da posição esquerda na posição direita
		
		l++;  // Avança o índice esquerdo
		r--;  // Retorna o índice direito
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
