#include <stdio.h>

int main() {
    int numero, i = 1;

    // Entrada do número
    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);

    // Cabeçalho
    printf("\n--- Tabuada de %d ---\n", numero);

    // Laço while para imprimir de 1 a 10
    while(i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++; // incremento
    }

    return 0;
}

