#include <stdio.h>
#include <stdlib.h>

int main (){
    int x;
    int *p;

    scanf("%d", &x);
    p=&x;
    printf("o valor de x %d\n", x);
    printf("o endereco de x %p\n", &x);
    printf("o valor armazenado em p %p\n", p);
    printf("o valor apontado por p %d\n", *p);
return 0;
}
