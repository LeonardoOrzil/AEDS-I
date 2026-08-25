#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, cont=0, i=0;

    printf("type a number\n");
    scanf("%d", &n);

    while(i<=n){
        cont=cont+i;
        i++;
    }
    printf("%d is the sum of all the numbers to %d", cont, n);

return 0;
}
