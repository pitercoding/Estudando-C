// Programa que apresenta a soma dos cem primeiros números naturais (1+2+3+...98+99+100). Treinando DO WHILE

#include <stdio.h>

int main(){
    int i, soma;
    soma=0;
    i=1;

    do
    {
        soma = soma +i;
        i++;
    } while (i<=100);
    
    printf("A soma de 1 ate 100 eh = %d", soma);

    return 0;
}