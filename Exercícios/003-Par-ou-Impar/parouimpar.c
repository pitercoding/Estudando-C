#include <stdio.h>
    int main() {
        int num;

        // Solicita ao usuário que digite um número
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        // Teste para saber se é par ou impar
        if (num % 2 == 0) {
            printf ("O numero %d eh PAR.\n", num);
        } else {
            printf("O numero %d eh IMPAR.\n", num);
        }
        
        return 0;
    }
    