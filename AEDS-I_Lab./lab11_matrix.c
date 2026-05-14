#include <stdio.h>

int main (){
    int matriz[2][3], x, y;

    for(x=0; x<3; x++){
        for(y=0; y<2; y++){
            scanf("%d", &matriz[y][x]);
        }
    }
    for(x=0; x<3; x++){
        for(y=0; y<2; y++){
            printf("%d ", matriz[y][x]);
        }
        printf("\n");
    }
return 0;
}
