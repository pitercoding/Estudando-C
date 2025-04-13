#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;
    char continuar = 's'; // Variável de controle

    printf("==== CALCULADORA INTERATIVA ====\n");

    while (continuar == 's' || continuar == 'S') {
        // Entrada de dados
        printf("\nDigite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite a operação (+, -, *, /): ");
        scanf(" %c", &operacao);  // espaço antes de %c é importante

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        // Processamento
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
                    printf("Erro: divisão por zero não é permitida.\n");
                }
                break;
            default:
                printf("Operação inválida. Use apenas +, -, *, /.\n");
        }

        // Perguntar se o usuário quer continuar
        printf("\nDeseja realizar outro cálculo? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("\nObrigado por usar a calculadora!\n");

    return 0;
}
