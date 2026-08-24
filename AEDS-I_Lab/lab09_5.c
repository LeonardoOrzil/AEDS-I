#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0, soma = 0;
    FILE *arq;
    
    arq = fopen("numeros.txt", "r");
    
    if (arq == NULL) { 
        printf("Erro ao abrir o arquivo.\n");
        return 1; 
    }
    
    while (fscanf(arq, "%d", &num) != EOF) {
        soma = num + soma;
    }
    
    printf("\n%d eh a soma\n", soma);
    
    fclose(arq);
    return 0;
}
