#include <stdio.h>
#include <stdlib.h>

void escreverRes(int *x, int* y, int *z) {//Funcao para exibir o resultado
	printf("%i + %i = %i", *x, *y, *z);
}

int somarValores(int *x, int *y) {//Funcao de soma dos valores lidos
	int soma = *x + *y;
	return soma;
}

int lerValor() {//Funcao de leitura dos valores
	int x;
	printf("\nDigite um valor: ");
	scanf("%i", &x);
	return x;
}

int main() {//Função principal
	int n1, n2, resultado; //Declaração de variaveis
	
	//Ler valores externos para soma
	n1 = lerValor();
	n2 = lerValor();
	
	resultado = somarValores(&n1, &n2);//Soma os valores lidos
	
	escreverRes(&n1, &n2, &resultado);//Escreve o resultado
}
