#include <stdio.h>

int main (){
    int idade;
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    if (idade>=18){
        printf("Acesso permitido");
    }else{
        printf("Acesso negado");
    }
return 0;
}
