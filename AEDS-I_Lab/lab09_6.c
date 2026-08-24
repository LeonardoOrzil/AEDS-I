#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0, count = 0;
    FILE *arquivo;
    
    arquivo = fopen("numeros.txt", "r");
    
    if (arquivo == NULL) { 
        printf("Erro ao abrir o arquivo.\n");
        return 1; 
    }
    
    while (fscanf(arquivo, "%d", &num) != EOF) {
        count++;
    }
    
    fclose(arquivo);
    
    printf("Quantidade de numeros no arquivo: %d\n", count);
    
    return 0;
}
