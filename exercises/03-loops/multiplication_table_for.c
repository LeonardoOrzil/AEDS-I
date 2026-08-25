#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab;
    printf("Choose which number would you like to see the multiplication table of\n\n");
    scanf("%d", &tab);
    printf("\n\n");

    for(int i=1; tab>=i; i++){
        printf("%d\n", tab*i);
    }
return 0;
}
