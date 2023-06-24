#include <stdio.h>
#include <stdlib.h>

int lerValor(int *x) {//Faz a leitura dos valores a serem digitados
	printf("Digite o valor: ");
	scanf("%i", x);
	return x;
}

int ordenar(int *a, int *b, int *c) {//Função para ordenar os valores
	if(a > b && a > c || a > c && a > b || a == b && a > c || a == c && a > b)
	{
		if(b>c)
		{
			return *b;
		}else
		{
			return *c;
		}
	}else if(b > a && b > c || b > c && b > a || b == a && b > c || b == c && b > b)
	{
		if(a>c)
		{
			return *a;
		}else
		{
			return *c;
		}
	}else if(c > a && c > b || c > b && c > a || c == a && c > b || c == b && c > a)
	{
		if(a>b)
		{
			return *a;
		}else
		{
			return *c;
		}
	}else 
	{
		return *a;
	}
}

void escrevaRes(int *x)  {//Função que escreve o segundo maior valor na tela
	printf("O segundo maior valor eh: %i", *x);
}

int main() {
	int valor1, valor2, valor3, armazenar;
	
	lerValor(&valor1);
	lerValor(&valor2);
	lerValor(&valor3);
	
	armazenar = ordenar(&valor1, &valor2, &valor3);
	
	escrevaRes(&armazenar);
}
