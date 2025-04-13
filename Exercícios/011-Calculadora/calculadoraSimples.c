#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    // Interface de entrada
    printf("Calculadora Simples\n");
    printf("-------------------\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao); // espaço antes de %c para ignorar '\n'

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Processamento com switch
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operação inválida. Tente novamente.\n");
    }

    return 0;
}
