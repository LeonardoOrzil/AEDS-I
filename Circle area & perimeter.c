#include <stdio.h>

int main () {
    float a, b, c;
    printf("Insert the radius of a circle\n");
    scanf("%f", &a);

    b= 2*3.14*a;
    c= 3.14*a*a;
    printf("The perimeter of this circle is %.2f, and it's area is %.2f", b, c);
return 0;
}
