#include <stdio.h>

int main (){
    int num, soma=0, cont=1;
    while(cont<=5){
        printf("Type a number\n");
        scanf("%d", &num);
        soma=soma+num;
        cont++;
    }
    printf("%d is the sum of the 5 numbers", soma);
    return 0;
}
