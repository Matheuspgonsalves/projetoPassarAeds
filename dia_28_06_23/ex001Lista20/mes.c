#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void escrevaRes(int mes, int diasMes) {
	printf("\nO mes %i tem %i dias.", mes, diasMes);
}

int qtdDias(int mes) {
	int ano[11];
	bool erro;
	
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
	
	if(mes < 1 || mes > 12) {
		return 0;
	}else {
		return ano[mes-1];
	}
}

int main() {
	int mes, diasMes;
	bool erro;
	
	do{
		printf("\nInforme o mes que deseja saber: ");
		scanf(" %i", &mes);
		diasMes = qtdDias(mes);
		if (diasMes == 0) {
			erro = false;
			if(erro == false) {
				printf("\n\nDigite um mes entre 1 e 12\n");
			}
		}
	}while(erro);
	
	
	
	escrevaRes(mes, diasMes);
	
	
}
