#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100], caracterdavez;
    FILE *arq;
    
    printf("Digite o nome do arquivo (com .txt no final):\n");
    scanf("%s", name);
    
    arq = fopen(name, "r");
    
    if (arq == NULL) { 
        printf("Erro ao abrir o arquivo.\n");
        return 1; 
    }
    
    while ((caracterdavez = fgetc(arq)) != EOF) {
        printf("%c", caracterdavez);
    }
    
    fclose(arq);
    
    return 0;
}
