#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int num;
    
    printf("Digite um numero inteiro para salvar: ");
    scanf("%d", &num);
    
    arquivo = fopen("numero.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }
    
    fprintf(arquivo, "%d\n", num);
    
    fclose(arquivo);
    printf("Numero gravado no arquivo numero.txt!\n");
    
    return 0;
}
