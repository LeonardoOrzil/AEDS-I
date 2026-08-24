#include <stdio.h>
#include <stdlib.h>

int main() {
    int maior = 0, num;
    FILE *arq;
    
    arq = fopen("numeros.txt", "r");
    
    if (arq == NULL) { 
        printf("Erro ao abrir o arquivo.\n");
        return 1; 
    }
    
    while (fscanf(arq, "%d", &num) != EOF) {
        if (num > maior) {
            maior = num;
        }
    }
    
    fclose(arq);
    
    printf("%d eh o maior numero do arquivo\n", maior);
    
    return 0;
}
