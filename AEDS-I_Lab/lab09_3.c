#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int num;
    
    arquivo = fopen("numero.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo. Ele não existe.\n");
        return 1;
    }
    
    fscanf(arquivo, "%d", &num);
    
    printf("O numero lido do arquivo eh: %d\n", num);
    
    fclose(arquivo);
    
    return 0;
}
