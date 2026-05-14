#include <stdio.h>

int main (){
    int matrix[3][3], x, y, sum=0, num=0;
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            scanf("%d", &matrix[x][y]);
        }
    }
     for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            num=matrix[x][y];
           sum=sum+num;
        }
     }
     printf("%d", sum);
return 0;
}
