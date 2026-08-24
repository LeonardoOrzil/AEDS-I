#include <stdio.h>
#include <stdlib.h>

int main(){
    int val, cont;
    printf("Type a positive number\n");

    do{
        scanf("%d", &val);
        if (val<0){
            printf("Invalid number!\n");
        }
    }while (val<0);
    printf("Valid number!");
return 0;
}
