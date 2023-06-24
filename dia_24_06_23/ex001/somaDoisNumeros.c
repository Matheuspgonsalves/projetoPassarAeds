#include <stdio.h>
#include <stdlib.h>


int somar( int *x, int *y) {
	int soma = *x+*y;
	return soma;
}

int main() {
	int n1, n2;
	
	printf("\nDigite um numero: ");
	scanf(" %i", &n1);
	
	printf("\nDigite outro numero: ");
	scanf(" %i", &n2);
	
	int res;
	res = somar(&n1, &n2);
	
	printf("%i + %i = %i", n1, n2, res);
}
