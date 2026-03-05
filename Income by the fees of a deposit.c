#include <stdio.h>
int main () {
    float a, b, c, d, x;
    printf("Insert the value of your deposit\n");
    scanf("%f", &a);
    printf("Insert now the percent of the fees\n");
    scanf("%f", &x);

    c= (a/100)*x;
    d= a+c;

    printf("The value of your income will be %.2f. In total you will have %.2f\n", c, d);

return 0;
}
