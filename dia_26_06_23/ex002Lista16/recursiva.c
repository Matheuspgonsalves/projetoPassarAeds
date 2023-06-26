#include <stdio.h>
#include <stdlib.h>

void funcRec(int x) {
	if(x == 5){
		printf("%i ", x);
	} else {
		printf("%i ", x);
		funcRec(x+1);
		printf("%i ", x);
	}
}

int main() {
	int x = 1;
	
	funcRec(x);
}
