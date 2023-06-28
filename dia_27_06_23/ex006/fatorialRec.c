#include <stdio.h>
#include <stdlib.h>

int fatorial(int x) {
	if(x == 1) {
		return x;
	} else {
		x *= fatorial(x-1);
		return x;
	}
}

int main(){
	int x, res;
	
	printf("\nCalculando Fatorial\n");
	
	printf("\nDigite um numero: ");
	scanf("%i", &x);
	
	res = fatorial(x);
	
	printf("O fatorial de %i = %i", x, res);
	
}
