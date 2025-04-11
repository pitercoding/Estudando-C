//Exercício: Conversor de Temperatura
//Fórmula Celsius → Fahrenheit: F = C × 9/5 + 32 
//Fórmula Fahrenheit → Celsius: C = (F - 32) × 5/9

#include <stdio.h>

int main() {
    int escolha;
    float celsius, fahrenheit;

    // Menu para o usuário escolher
    printf("Conversor de Temperatura\n");
    printf("------------------------\n");
    printf("Escolha uma opção:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    // Lógica de conversão
    if (escolha == 1) {
        printf("\nDigite a temperatura em Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = celsius * 9 / 5 + 32;
        printf("🌡 %.2f°C = %.2f°F\n", celsius, fahrenheit);
    }
    else if (escolha == 2) {
        printf("\nDigite a temperatura em Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("🌡 %.2f°F = %.2f°C\n", fahrenheit, celsius);
    }
    else {
        printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
