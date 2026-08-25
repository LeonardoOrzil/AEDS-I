#include <stdio.h>
#include <stdlib.h>

int main() {
    int countc = 0;
    FILE *arq;
    char nomea[80], cpp, cdve;
    
    printf("Digite o nome do arquivo:\n");
    scanf("%s", nomea); 
    
    arq = fopen(nomea, "r");
    if (arq == NULL) { 
        printf("Erro ao abrir o arquivo.\n");
        return 1; 
    }
    
    printf("Digite o caractere para pesquisa:\n");
    // O espaço antes do %c absorve o 'Enter' invisível da leitura anterior!
    scanf(" %c", &cpp); 
    
    while ((cdve = fgetc(arq)) != EOF) {
        if (cdve == cpp) {
            countc++;
        }
    }
    
    printf("O caractere '%c' aparece %d vezes\n", cpp, countc);
    
    fclose(arq);
    
    return 0;
}
