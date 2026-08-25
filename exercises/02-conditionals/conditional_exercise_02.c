#include <stdio.h>
#include <stdlib.h>

int main (){

    int num1;
    printf("Insert a number to check if it is divisible by 7 or not\n");
    scanf("%d", &num1);

    if(num1%7!=0){
        printf("%d is not divisible by 7", num1);
    }else{
        printf("%d is divisible by 7", num1);
    }

return 0;
}
