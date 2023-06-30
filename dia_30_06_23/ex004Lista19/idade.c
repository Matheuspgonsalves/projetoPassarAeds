#include <stdio.h>

void escrevaRes(int mediaIdade, int abaixoMedia) {
    printf("\nA media de idade eh: %i\n", mediaIdade);
    printf("\nA quantidade de pessoas abaixo da media eh: %i\n", abaixoMedia);

}

pessoasAbaixoMedia(int idade[5], int tam, int media){//Retorna a quantidade de pessoas que ficaram abaixo da media da idade
    int numPessoas = 0;
    for(int i = 0; i < tam; i++) {
        if(idade[i] < media) {
            numPessoas++;
        }
    }
    return numPessoas;
}

int mediaIdades(int soma, int tam) {//Retorna a variavel, a media da idade
    int media;
    media = soma/tam;
    return media;
}

int somaIdades(int idade[5], int tam) {//Retorna a soma de todas as idades
    int soma = 0;
    for(int i = 0; i < tam; i++) {
        soma += idade[i];
    }
    return soma;
}

int lerIdade(int idade[5], int tam) {//Retorna o array preenchido com as idades
    for(int i = 0; i < tam; i++) {
        printf("Digite a idade da %iº Pessoa: ", i+1);
        scanf(" %i", &idade[i]);
    }
    return idade;
}

int main() {
    const int tamIdade = 5;//Constante para o tamanho do Array
    int idade[5], soma = 0, media, abaixoMedia;

    lerIdade(idade, tamIdade);//Envia a funcao o tamanho do array e o proprio array.

    soma = somaIdades(idade, tamIdade);//Envia a funcao os valores das idades

    media = mediaIdades(soma, tamIdade);//Envia a funcao a idade e o tamanho do array para ser realizado a media

    abaixoMedia = pessoasAbaixoMedia(idade, tamIdade, media);//Envia a funcao, o array, o tamanho dele e a media da idade.

    escrevaRes(media, abaixoMedia);//Envia a funcao a media das idades e a quantidade de pessoas com idade abaixo da media.

}

