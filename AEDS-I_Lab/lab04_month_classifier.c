#include <stdio.h>
#include <stdlib.h>

int main(){
    int month;
    printf("Type in which month you are\n");
    scanf("%d", &
          month);

    switch(month){

        case 1:
            printf("first semester");
            break;
        case 2:
            printf("first semester");
            break;
        case 3:
            printf("first semester");
            break;


        case 4:
            printf("second semester");
            break;
        case 5:
            printf("second semester");
            break;
        case 6:
            printf("second semester");
            break;


        case 7:
            printf("third semester");
            break;
        case 8:
            printf("third semester");
            break;
        case 9:
            printf("third semester");
            break;

        case 10:
            printf("fouth semester");
            break;
        case 11:
            printf("fouth semester");
            break;
        case 12:
            printf("fouth semester");
            break;

        default:
            printf("error");
    }


return 0;
}
