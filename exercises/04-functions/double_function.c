#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int dobrode(int a){
    a=a*2;
    return a;
}
int main (){
    int p;
    printf("Insert a number\n");
    scanf("%d", &p);
    printf("%d is the double\n", dobrode(p));

return 0;
}
