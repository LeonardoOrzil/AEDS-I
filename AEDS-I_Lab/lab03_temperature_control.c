#include <stdio.h>

int main () {
    int a;
    printf("Digite a temperatura\n");
    scanf("%d", &a);
    if (a<18){
        printf("Temperatura baixa");
    }else if (a<=25){
        printf("Temperatura ideal");
    }else{
        printf("Temperatura alta");
    }

return 0;
}
