#include <stdio.h>
#include <stdlib.h>

void funcRec(int x, int y) {
	if (x == y) {
		printf("%i ", x);
	} else {
		printf("%i ", x);
		funcRec(x-1, y);
	}
}

int main() {
	int x, y = 0;
	
	printf("\nInforme um valor maior que 0: ");
	scanf(" %i", &x);
	
	funcRec(x, y);
}
