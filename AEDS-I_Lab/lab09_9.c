#include <stdio.h>
#include <stdlib.h>

int main() {
    char linha[200], arqui[80], copin[80];
    FILE *arq, *copy;
    
    printf("Digite qual arquivo deseja realizar uma copia:\n");
    scanf("%s", arqui);
    
    printf("Digite o nome da copia (com .txt):\n");
    scanf("%s", copin);
    
    arq = fopen(arqui, "r");
    if (arq == NULL) { 
        printf("Erro ao abrir arquivo de origem.\n");
        return 1; 
    }
    
    copy = fopen(copin, "w");
    if (copy == NULL) { 
        printf("Erro ao criar arquivo de destino.\n");
        fclose(arq); // Garante que o primeiro arquivo feche se o segundo falhar
        return 1; 
    }
    
    while (fgets(linha, sizeof(linha), arq) != NULL) {
        fprintf(copy, "%s", linha);
    }
    
    fclose(arq);
    fclose(copy);
    
    printf("Operacao realizada com exito!\n");
    
    return 0;
}
