#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    float a, b, c, d, x1, x2;
    // d is for delta, i'm not crazy
    printf("Insert the values of a, b and c respectively of your quadratic equation to calculate it\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a==0){
        printf("This is not a quadratic equation");
        return 0;
    }
    d=b*b-4*a*c;

    x1=(-b +sqrt(d))/(2*a);
    x2=(-b -sqrt(d))/(2*a);

    if(d>0){
        printf("%.2f and ", x1);
        printf("%.2f are the roots of the equation. since delta > 0, there are 2 different real roots", x2);
    }else if(d==0){
        printf("%.2f is the only root of the equation, since delta = 0 (you can also say that the roots are the same!)", x1);
    }else{
        printf("Since delta < 0, your equation has no real roots...");
    }
return 0;
}
