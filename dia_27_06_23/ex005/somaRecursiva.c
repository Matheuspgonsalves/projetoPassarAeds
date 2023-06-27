#include <stdio.h>
#include <stdlib.h>

int somaRec(int n, int m) {//Funcao para somar os numeros
	if(n==m) {
		return m;
	} else {
		m += somaRec(n, m+1);
		return m;
	}
}

int main() {
	int n, m, resultado;
	
	//Numero maximo a ser enviado como parametro
	printf("\nDigite o numero de limite superior: ");
	scanf(" %i", &n);
	
	//numero minimo a ser enviado como parametro 
	printf("\nDigite o numero de limite inferior: ");
	scanf(" %i", &m);
	
	resultado = somaRec(n, m);
	
	printf("\nA soma de %i ate %i eh: %i", m, n, resultado);
}
