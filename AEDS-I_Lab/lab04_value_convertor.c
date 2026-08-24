#include <stdio.h>
#include <stdlib.h>

int main (){
    int option;
    float mmm;
    // mmm can be meters, kilograms, or hours
    printf("Do you want\n 1 convert meters to centimeters\n 2 convert kilograms to grams\n 3 convert hours into minutes\n");
    scanf("%d", &option);

    printf("Insert the value you want to convert the value you choose\n");
    scanf("%f", &mmm);

    switch (option){

        case 1:
            printf("%.2f centimeters\n", mmm*100);
            break;
        case 2:
            printf("%.2f grams\n", mmm*100);
            break;
        case 3:
            printf("%.2f minutes", mmm*60);
            break;

    }

return 0;
}
