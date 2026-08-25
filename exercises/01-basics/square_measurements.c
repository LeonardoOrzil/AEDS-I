#include <stdio.h>

int main () {
    float a=0, b=0, c=0, d=0;
    printf("Lado do quadrado: ");
    scanf("%f",&a);

    b= a*4;
    c= a*a;
    d= a*1.414;
    printf("%.2f eh o perimetro, %.2f eh a area, %.2f eh a diagonal", b, c, d);

return 0;
}
