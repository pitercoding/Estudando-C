

#include <stdio.h>

int main () {
    int numero, i;

    //Entrada de Dados

    printf("Digite um numero: ");
    scanf("%d", &numero);

    //Cabeçalho da tabuada
    printf("\n--- Tabuada de %d ---\n", numero);

    // Laço de repetição para mostrar a tabuada de 1 a 10
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    //Aqui está o laço de repetição for: -> i = 1: começa em 1.   -> i <= 10: repete enquanto i for menor ou igual a 10.      -> i++: a cada repetição, aumenta i em 1.

    // Dentro do laço: O printf imprime o cálculo: número × i = resultado. Exemplo: se numero for 7 e i for 3, a linha impressa será: 7 x 3 = 21

    // Fim do programa
    return 0;
}