#include <stdio.h>
int main () {
    float a, b, c, d, x;
    printf("Insert the value of your deposit\n");
    scanf("%f", &a);
    printf("Insert now the percent of the interest\n");
    scanf("%f", &x);

    c= (a/100)*x;
    d= a+c;

    printf(" Value the income: %.2f\n Total value after the income: %.2f\n", c, d);

return 0;
}
