#include <stdio.h>
#include <stdlib.h>

int main (){
    int n;
    int *p; // *p=n p=&n

    scanf("%d", &n);
    p=&n;

    *p=*p*21;

    printf("%d", n);
return 0;
}
