#include <stdio.h>
#include <stdlib.h>

void lerIdade(int *x) {
	printf("\nDigite sua idade: ");
	scanf("%i", x);
}

int main() {
	int idade;
	
	lerIdade(&idade);
	printf("Idade: %i anos", idade);
}

