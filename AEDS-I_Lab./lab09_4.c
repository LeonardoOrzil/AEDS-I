#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int n, i, num;
    
    printf("Quantos numeros voce deseja guardar no arquivo? ");
    scanf("%d", &n);
    
    arquivo = fopen("numeros.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);
        // O \n garante que o exercício 5 vai conseguir ler um por linha!
        fprintf(arquivo, "%d\n", num); 
    }
    
    fclose(arquivo);
    printf("Todos os %d numeros foram salvos em numeros.txt!\n", n);
    
    return 0;
}
