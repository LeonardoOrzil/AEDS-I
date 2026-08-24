#include <stdio.h>
#include <stdlib.h>

void pele(int *n){
    *n=*n*2;
}

int main (){
    int b;
    int *n;
    scanf("%d", &b);
    n=&b;
    pele(n);
    printf("%d", b);
return 0;
}
