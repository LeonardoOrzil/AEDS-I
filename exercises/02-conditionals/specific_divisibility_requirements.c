#include <stdio.h>
#include <stdlib.h>


int main (){
    int num1, div39, div2, div5;

    printf("Type 10 numbers\n");

    for(int i=0; i<10; i++){
        scanf("%d", &num1);
        printf("%d is divisible by", num1);
        if (num1%3==0 && num1%9==0){
            printf(" 3 and 9\n");
            div39++;
        }
         else if (num1%2==0){
            printf(" 2\n");
            div2++;
        }
        else if (num1%5==0){
            printf(" 5\n");
            div5++;
        }else{
            printf(" none of the required numbers\n");
        }

    }
    printf("%d is the amount of numbers divisible by 3 and 9\n%d is the amount of numbers divisible by 2\n%d is the amount of numbers divisible by 5", div39, div2, div5);


return 0;
}
