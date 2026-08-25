#include <stdio.h>

int main (){
    int a, b=1, ant1=0, ant2=0;
    printf("Type how many numbers of fibonacci you want to see\n\n");
    scanf("%d", &a);

    for(int i=0; i<a; i++){
        printf("%d\n", b);
        ant2=ant1;         
        ant1=b;
        b=ant1+ant2;
    }
return 0;
}
