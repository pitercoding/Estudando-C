//Esse código permite ao usuário calcular a média de duas ou três notas, verificar a aprovação e fornecer uma saída clara e objetiva no terminal. 

#include <stdio.h>

int main() {
    // Declaração das variáveis
    float nota1, nota2, nota3, media;
    int quantidadeNotas;

    // Solicitar ao usuário o número de notas (2 ou 3)
    printf("Quantas notas você quer calcular? (2 ou 3): ");
    scanf("%d", &quantidadeNotas);

    // Solicitar as notas de acordo com a escolha do usuário
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if (quantidadeNotas == 3)
    {
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
    }
    
    // Calcular a média
    if (quantidadeNotas == 3)
    {
        media = (nota1 + nota2 + nota3) / 3; // Média com 3 notas
    } else {
        media = (nota1 + nota2) / 2; // Média com 2 notas
    }
    
    // Verificar se o aluno foi aprovado ou reprovado
    if (media >=7.0)
    {
        printf("Aprovado! Sua média foi: %.2f\n", media);
    } else {
        printf("Reprovado! Sua média foi: %.2f\n", media);
    }
    
    return 0;

}