#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade[5], soma = 0, media, i;
	
	for(i = 0; i < 5; i++) {//Recebendo a idade das pessoas
		printf("\nDigite a idade da %iº pessoa: ", i+1);
		scanf(" %i", &idade[i]);
		soma += idade[i];
		media = soma/5;
	}
	//Mostrando a idade media das pessoas
	printf("\nIdade media: %i", media);
	
	printf("\nIdades abaixo da media: ");
	for(i = 0; i < 5; i++) {//Mostrando a idade
		if(idade[i] < media) {
			printf("\n%i", idade[i]);
		}
	}
	
	
	
}
