#include <stdio.h>

int main() {
    int num1, num2, soma;

    // Solicita ao usuário que digite dois números
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Realiza a soma
    soma = num1 + num2;

    // Exibe o resultado
    printf("A soma de %d + %d eh igual a %d\n", num1, num2, soma);

    return 0;
}
