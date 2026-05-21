#include <stdio.h>
#include <stdlib.h>

int main() {
    char linha[256];
    FILE *arq;
    
    arq = fopen("numeros.txt", "r");
    
    if (arq == NULL) { 
        printf("Erro ao abrir o arquivo.\n");
        return 1; 
    }
    
    while (fgets(linha, sizeof(linha), arq) != NULL) {
        printf("%s", linha);
    }
    
    fclose(arq);
    
    return 0;
}
