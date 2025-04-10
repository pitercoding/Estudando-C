// Programa que apresenta a soma dos cem primeiros números naturais (1+2+3+...98+99+100). Treinando FOR

#include <stdio.h>

 int main(){
    int i, soma;
    soma = 0;

    for (i=1; i<=100; i++)
    {
        soma = soma + i;
    }
    printf("A soma de 1 a 100 eh = %d", soma);

    return 0;
 }

