#include <stdio.h>
#include <stdlib.h>

int main (){
    int x, y=1;
    printf("type a number: ");
    scanf("%d", &x);
    while (y<=10){
        printf("%d\n", x*y);
        y++;
    }
    
    return 0;
}
