#include <stdio.h>

int fibonacci_recursivo(int k) {
    if (k <= 0) {
        return 0;
    } else if (k == 1) {
        return 1;
    } else {
        k = fibonacci_recursivo(k - 1) + fibonacci_recursivo(k - 2);
        return k;
    }
}

int main() {
    int k;
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    int resultado = fibonacci_recursivo(k);
    printf("O %dº termo da sequencia de Fibonacci eh: %d\n", k, resultado);
    return 0;
}

