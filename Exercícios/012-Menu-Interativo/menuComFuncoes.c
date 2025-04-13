#include <stdio.h>

// Funções para operações
float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}

// Função para exibir o menu
void mostrarMenu() {
    printf("\n=== CALCULADORA ===\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
}

// Função para ler dois números do usuário
void lerNumeros(float *x, float *y) {
    printf("Digite o primeiro número: ");
    scanf("%f", x);
    printf("Digite o segundo número: ");
    scanf("%f", y);
}

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lerNumeros(&num1, &num2);
                resultado = somar(num1, num2);
                printf("Resultado da soma: %.2f\n", resultado);
                break;

            case 2:
                lerNumeros(&num1, &num2);
                resultado = subtrair(num1, num2);
                printf("Resultado da subtração: %.2f\n", resultado);
                break;

            case 3:
                lerNumeros(&num1, &num2);
                resultado = multiplicar(num1, num2);
                printf("Resultado da multiplicação: %.2f\n", resultado);
                break;

            case 4:
                lerNumeros(&num1, &num2);
                if (num2 != 0) {
                    resultado = dividir(num1, num2);
                    printf("Resultado da divisão: %.2f\n", resultado);
                }
                break;

            case 0:
                printf("Encerrando a calculadora...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
