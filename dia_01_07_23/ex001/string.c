#include <stdio.h>
#include <stdlib.h>

void escrevaQtdLetra(int qtdLetraA) {
    printf("\nA palavra tem %i letras 'A'\n", qtdLetraA);
}

void escrevaCaracteres(int car) {
    printf("\nA palavra tem %i caracteres\n", car);
}

int leiaLetraA (char palavra[20]) {
    int soma = 0;
    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == 'A' || palavra[i] == 'a') {
            soma++;
        }
    }
    return soma;
}

void escrevaChar (char palavra[20]) {
    printf("\nA palavra digitada eh: %s\n", palavra);
}

int tamPalavra(char palavra[20]) {
    int soma = 0;
    for(int i = 0; palavra[i] != '\0'; i++) {
        soma++;
    }
    return soma;
}

char lerPalavra(char palavra[20]) {
    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);
    return palavra;
}

int main() {
    char palavra[20];
    int tamanhoPalavra, qtdLetraA;

    //Vai receber a palavra digitada
    lerPalavra(palavra);

    //Vai exibir a palavra escolhida
    escrevaChar(palavra);

    //Vai calcular o tamanho de caracteres da palavra
    tamanhoPalavra = tamPalavra(palavra);

    //Vai exibir a quantidade de caracteres
    escrevaCaracteres(tamanhoPalavra);

    //Vai calcular a quantidade de letras A que tem na palavra
    qtdLetraA = leiaLetraA(palavra);

    //Vai exibir a quantidade de letras A
    escrevaQtdLetra(qtdLetraA);




}
