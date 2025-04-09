#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número inteiro (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            if (numero % 2 == 0) {
                printf("O número %d é PAR.\n", numero);
            } else {
                printf("O número %d é ÍMPAR.\n", numero);
            }
        }

    } while (numero != 0);

    printf("Programa encerrado.\n");

    return 0;
}

    