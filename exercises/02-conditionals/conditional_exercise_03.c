#include <stdio.h>
#include <stdlib.h>

int main (){
    float a=0, b=0, c=0;
    printf("Add 3 values to check if them can be sides of a triangle\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a+b>c && a+c>b && c+b>a){
        printf("Those values can be sides of a triangle!\n");
    }else{
        printf("Those values can not be sides of a triangle\n");
    }
return 0;
}
