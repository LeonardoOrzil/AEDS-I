#include <stdio.h>

int soma(int a, int b){

    return a+b;
}
int dobro(int x){

    return 2*x;
}
int main(){
    int a, b, c, resp;
    printf("Type an a number:\t\n");
    scanf("%d", &a);
    printf("Type a b number:\t\n");
    scanf("%d", &b);

    resp=dobro(soma(a,b));

    printf("The double of the sum of %d and %d is %d", a,b, resp);
return 0;
}
