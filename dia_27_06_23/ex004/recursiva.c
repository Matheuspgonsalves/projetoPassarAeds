#include <stdio.h>
#include <stdlib.h>

funcRec(int x) {
	if(x == 0) {
		printf("%i ", x);
	} else {
		printf("%i ", x);
		funcRec(x-1);
	}
}

int main() {
	int x;
	
	printf("\nDigite um numero maior que 0: ");
	scanf("%i", &x);
	
	funcRec(x);
}
