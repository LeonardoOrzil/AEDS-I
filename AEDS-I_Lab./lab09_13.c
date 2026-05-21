#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ret1, *ret2;
    char nome1[90], nome2[90], linha1[200], linha2[200];
    FILE *arq1, *arq2, *arqi;

    printf("Digite o nome dos arquivos (separados por enter):\n");
    scanf("%s", nome1);
    scanf("%s", nome2);

    arq1 = fopen(nome1, "r");
    if (arq1 == NULL) { 
        printf("Erro ao abrir %s\n", nome1);
        return 1; 
    }
    
    arq2 = fopen(nome2, "r");
    if (arq2 == NULL) { 
        fclose(arq1);
        printf("Erro ao abrir %s\n", nome2);
        return 1; 
    }
    
    arqi = fopen("intercalado.txt", "w");
    if (arqi == NULL) { 
        fclose(arq1);
        fclose(arq2);
        printf("Erro ao criar arquivo de saida.\n");
        return 1; 
    }

    // O laço com quebra manual
    while(1) {
        ret1 = fgets(linha1, sizeof(linha1), arq1);
        ret2 = fgets(linha2, sizeof(linha2), arq2);

        // Se os dois arquivos acabaram, encerra o laço
        if (ret1 == NULL && ret2 == NULL) { 
            break; 
        }

        // Escreve do primeiro arquivo se a leitura deu certo
        if (ret1 != NULL) {
            fprintf(arqi, "%s", linha1);
        }

        // Escreve do segundo arquivo se a leitura deu certo
        if (ret2 != NULL) {
            fprintf(arqi, "%s", linha2);
        }
    }

    fclose(arq1); 
    fclose(arq2); 
    fclose(arqi);

    printf("Arquivo intercalado criado com sucesso!\n");

    return 0;
}
