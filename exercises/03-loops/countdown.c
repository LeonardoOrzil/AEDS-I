#include <stdio.h>
#include <stdlib.h>

int main(){
    int max, num;
    printf("Type a number\n");
    scanf("%d", &max);
    printf("\n\n");
    while(max!=-1){
        printf("%d\n", max);
        max--;
    }
return 0;
}
