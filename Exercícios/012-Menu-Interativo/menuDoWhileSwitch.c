#include <stdio.h>

int main(){
    int opcao;
    float num1, num2, resultado;

    do {
        // Exibir menu
        printf("\n=== MENU DE OPERACOES ===\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        
        case 2:
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;

        case 3:
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;

        case 4:         
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            if (num2 !=0) {
                resultado = num1 / num2;
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero não é permitida.\n");
            }
            break;

        case 0:
            printf("Saindo do programa...\n");
            break;

        default: printf("Opção inválida! Tente novamente.\n");
        
        }

    } while (opcao != 0);

    return 0;
}