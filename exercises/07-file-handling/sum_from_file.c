#include <stdio.h>
#include <stdlib.h>

int main (){
    int t=0, num=0, sum=0;
    FILE *a;
    scanf("%d", &t);
    a=fopen("troll.txt", "a");
    while (t>0){
        fprintf(a, "%d\t", t);
        scanf("%d", &t);
    }
    fclose(a);
    a=fopen("troll.txt", "r");
    while(fscanf(a, "%d", &num) != EOF){
        sum=num+sum;
    }
    printf("%d is the sum", sum);

return 0;
}

