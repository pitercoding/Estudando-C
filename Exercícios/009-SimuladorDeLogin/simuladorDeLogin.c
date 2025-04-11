#include <stdio.h>
#include <string.h>

int main(){
    // Credenciais corretas
    char usuarioCorreto[] = "admin";
    char senhaCorreta[] = "1234";

    // Variáveis para receber o que o usuário digitar
    char usuario[20];
    char senha[20];

     // Entrada de dados
    printf("=== Sistema de Login ===\n");
    printf("Usuário: ");
    scanf("%s", usuario);
    printf("Senha: ");
    scanf("%s", senha);

    // Comparação das strings usando strcmp
    if (strcmp(usuario, usuarioCorreto) == 0 && strcmp(senha, senhaCorreta) == 0)
    {
        printf("Login bem-sucedido! Bem-vindo, %s.\n", usuario);
    } else {
        printf("Login inválido. Verifique o nome de usuário ou senha.\n");
    }
    
    return 0;
}