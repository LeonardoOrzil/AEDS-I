#include <stdio.h>
#include <stdlib.h>

int main (){
    float a, b, x;
    //ax+b=0 ==> x=-b/a
    printf("note: this program only works for ax+b=0 equations\n Insert the value of a\n");
    scanf("%f", &a);
    printf("Insert the value of b\n");
    scanf("%f", &b);

    x=-b/a;
    printf("%.2f is the value of x", x);
return 0;
}
