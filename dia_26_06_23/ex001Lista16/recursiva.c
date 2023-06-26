#include <stdio.h>
#include <stdlib.h>

void recursiva(int x) {//Funcao recursiva
	if(x == 5) {
		printf("%i", x);
	} else {
		printf("%i ", x);
		recursiva(x+1);
	}
}

int main() {
	int x = 1;
	
	recursiva(x);
}
