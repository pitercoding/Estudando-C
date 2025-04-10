//Calcular o volume de uma lata de óleo cilíndrica, usando a fórmula do volume de um cilindro: Volume <- π * R ^ 2 * Altura

#include <stdio.h>
#include <math.h>  // Inclui M_PI (constante mais precisa de PI)
#include <corecrt_math_defines.h>

int main() {
    // Declaração de variáveis
    float volume, r, altura;

    // Entrada de dados com validação
    do {
        printf("Entre com o valor do raio (r > 0): ");
        scanf("%f", &r);
        if (r <= 0) {
            printf("Valor invalido! O raio deve ser maior que zero.\n");
        }
    } while (r <= 0);

    do {
        printf("Entre com o valor da altura (altura > 0): ");
        scanf("%f", &altura);
        if (altura <= 0) {
            printf("Valor invalido! A altura deve ser maior que zero.\n");
        }
    } while (altura <= 0);

    // Cálculo do volume
    volume = M_PI * pow(r, 2) * altura;  
    
    // Usando pow() para r^2 e M_PI para π. -- r é o raio da base (em metros, centímetros etc.) -- altura é a altura do cilindro

    // Saída formatada - %.2f formata o número com duas casas decimais, ex: volume = 18.85.
    printf("Volume da lata de oleo = %.2f\n", volume);

    return 0;
}
