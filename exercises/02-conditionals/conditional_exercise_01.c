#include <stdio.h>

int main(){
    int num1, num2, sub, div;

    printf("Digite o primeiro numero\n");
    scanf("%d", &num1);

    printf("Digite o segundo numero\n");
    scanf("%d", &num2);

    sub=num1-num2;

    printf("%d\n", sub);

    if(num2!=0){
        div=num1/num2;
        printf("%d", div);
    }else{

    }
return 0;
}
