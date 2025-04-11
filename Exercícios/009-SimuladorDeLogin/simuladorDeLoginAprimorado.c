#include <stdio.h> //usada para funções de entrada e saída (como printf, scanf, fgets).
#include <string.h> //usada para manipular strings (strcmp, strcspn, etc).

#define MAX_TENTATIVAS 3
#define MAX_USUARIOS 3

// Estrutura para armazenar usuários e senhas. Cria uma estrutura (struct) chamada Conta para armazenar os dados de um usuário (nome e senha). Usa typedef para facilitar a criação de variáveis desse tipo.
typedef struct {
    char usuario[20];
    char senha[20];
} Conta;

// Menu pós-login
void mostrarMenu(char nome[]) {
    int opcao;

    // do...while garante que o menu continue aparecendo até que o usuário escolha "3. Sair".
    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("Bem-vindo, %s\n", nome);
        printf("1. Ver perfil\n");
        printf("2. Alterar senha (simulado)\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // limpa o buffer do teclado. getchar() remove o \n deixado pelo scanf.

        switch(opcao) {
            case 1:
                printf("Exibindo perfil...\n");
                break;
            case 2:
                printf("Função de alteração de senha ainda não implementada.\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("❗ Opção inválida.\n");
        }
    } while(opcao != 3);
}

int main() {
    Conta contas[MAX_USUARIOS] = {
        {"admin", "1234"},
        {"joao", "senha123"},
        {"ana", "abc123"}
    };

    char usuario[30];
    char senha[30];
    int tentativas = 0;
    int logado = 0;

    printf("=== SISTEMA DE LOGIN ===\n");

    while (tentativas < MAX_TENTATIVAS && !logado) {
        printf("\nUsuário: ");
        fgets(usuario, sizeof(usuario), stdin);
        usuario[strcspn(usuario, "\n")] = '\0';  // remover '\n'

        printf("Senha: ");
        fgets(senha, sizeof(senha), stdin);
        senha[strcspn(senha, "\n")] = '\0';

        // Verifica se usuário e senha estão corretos
        for (int i = 0; i < MAX_USUARIOS; i++) {
            if (strcmp(usuario, contas[i].usuario) == 0 && strcmp(senha, contas[i].senha) == 0) {
                printf("Login bem-sucedido! Bem-vindo, %s.\n", usuario);
                logado = 1;
                mostrarMenu(usuario);
                break;
            }
        }

        if (!logado) {
            tentativas++;
            printf("Login inválido! Tentativa %d de %d.\n", tentativas, MAX_TENTATIVAS);
        }
    }

    if (!logado) {
        printf("\n Acesso bloqueado. Número máximo de tentativas excedido.\n");
    }

    return 0;
}
