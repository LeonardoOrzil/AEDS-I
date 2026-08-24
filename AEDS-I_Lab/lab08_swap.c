#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main (){
    int a, b;
    int *pa, *pb;
    printf("Type 2 numbers\n");
    scanf("%d%d", &a, &b);
    pa=&a;
    pb=&b;
    printf("Before a = %d b = %d\n", a, b);
    trocar(pa, pb);
    printf("After a = %d b = %d\n", a, b);
return 0;
}
