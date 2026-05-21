#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nome[50];
    int idade;
    
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    arquivo = fopen("meus_dados.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }
    
    fprintf(arquivo, "Nome: %s\nIdade: %d\n", nome, idade);
    
    fclose(arquivo);
    printf("Dados salvos em meus_dados.txt com sucesso!\n");
    
    return 0;
}
