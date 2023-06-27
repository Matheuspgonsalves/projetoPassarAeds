#include <stdio.h>
#include <stdlib.h>

void funcRec(int x, int y) {
	if (x == y) {
		printf("%i ", x);
	} else {
		funcRec(x-1, y);
		printf("%i ", x);
	}
}

int main() {
	int x, y = 0;
	
	printf("\nInforme um valor maior que 0: ");
	scanf(" %i", &x);
	
	funcRec(x, y);
}
