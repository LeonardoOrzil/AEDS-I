#include <stdio.h>

int main (){
    int freqcrd, suando;
    printf("Type your cardiac frequency\n");
    scanf("%d", &freqcrd);
    printf("Are you sweating?\n Type 1 for yes Type 2 for no\n");
    scanf("%d", &suando);
    if (freqcrd>100 && suando==1){
        printf("Possible lie");
    }else{
        printf("Possible truth");
    }
return 0;
}
