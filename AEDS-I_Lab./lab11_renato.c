#include <stdio.h>

int main (){
    int quad[4][4], c, l;
    FILE *renato;
    renato=fopen("venha_comer.txt", "a");
    for(c=0; c<4; c++){
        for(l=0; l<4; l++){
            printf("x=%d,y=%d\n",l+1, c+1);
            scanf("%d", &quad[c][l]);

        }
    }
    for(c=0; c<4; c++){
        for(l=0; l<4; l++){
            printf("%d ", quad[c][l]);
            fprintf(renato, "%d ", quad [c][l]);
        }
        printf("\n");
        fprintf(renato,"\n");
    }
    fclose (renato);
    printf("\n\n");
    c=0;
    l=3;
    while(c<4){
        printf("%d ", quad[c][l]);
        c++;
        l--;
    }

return 0;
}
