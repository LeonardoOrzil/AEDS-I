#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, num2, option;
    printf("Type the first number\n");
    scanf("%d", &num1);
    printf("Type the second number\n");
    scanf("%d", &num2);

    printf("Do you want\n 1 The sum of them\n 2 The subtraction of them\n 3 The multiplication of them\n 4 The division of them\n");
    scanf("%d", &option);

    switch (option){

        case 1:
            printf("%d", num1+num2);
            break;
        case 2:
            printf("%d", num1-num2);
            break;
        case 3:
            printf("%d", num1*num2);
            break;
        case 4:
            printf("%d", num1/num2);
            break;
        default:
            printf("error\n");
    }
return 0;
}
