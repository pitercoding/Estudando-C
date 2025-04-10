#include <stdio.h>

int main() {
    // Cabeçalho
    printf("┌──────────────────────────────────────────────────────────────┐\n");
    printf("│\t\t\tTabuada de 1 a 10\n");
    printf("└──────────────────────────────────────────────────────────────┘\n");
    
    // Loop para as tabuadas de 1 a 10
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            // Aqui imprimimos os resultados lado a lado
            printf("%2d x %2d = %3d\t", j, i, j * i);
        }
        // Nova linha para cada número da tabuada
        printf("\n");
    }

    return 0;
}

