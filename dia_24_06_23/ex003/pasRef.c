#include <stdio.h>
#include <stdlib.h>

void teste(int n, int *b, int *k) {
	printf("%i * %i = %i", *b, *k, n);
}

int main() {
	int n = 15,b = 3,k = 5;
	
	teste(n, &b, &k);
}
