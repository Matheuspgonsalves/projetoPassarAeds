#include <stdio.h>
#include <stdlib.h>

int main() {
	int ano[11], mes;
	
	ano[0] = 31;
	ano[1] = 28;
	ano[2] = 31;
	ano[3] = 30;
	ano[4] = 31;
	ano[5] = 30;
	ano[6] = 31;
	ano[7] = 30;
	ano[8] = 31;
	ano[9] = 30;
	ano[10] = 31;
	ano[11] = 30;
	
	printf("\nInforme o numero do mes que deseja verificar a quantidade de dias: ");
	scanf("%i", &mes);
	
	printf("O mes %i tem %i dias", mes, ano[mes-1]);
}
