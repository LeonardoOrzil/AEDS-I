#include <stdio.h>
#include <stdlib.h>

int main() {
    char linhas[80], na[80];
    int countl = 0, countc = 0;
    char cdv;
    FILE *arq;
    
    printf("Digite qual arquivo deseja contar as linhas:\n");
    scanf("%s", na);
    
    arq = fopen(na, "r");
    
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    // Contagem das linhas usando fgets
    while (fgets(linhas, sizeof(linhas), arq) != NULL) {
        countl++;
    }
    
    // Rebobina o cursor para o começo do arquivo para fazer o bônus
    rewind(arq); 
    
    // Contagem de todos os caracteres
    while (fscanf(arq, "%c", &cdv) != EOF) {
        countc++;
    }
    
    fclose(arq);
    
    printf("Total de linhas: %d\n", countl);
    printf("Total de caracteres: %d\n", countc);
    
    return 0;
}
