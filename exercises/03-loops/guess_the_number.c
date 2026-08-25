#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, gues=0;
    num = rand() % 10+1;
    while(gues!=num){
        printf("Guess the number between 1 and 10\n");
        scanf("%d", &gues);
        printf("Wrong! Try again\n");
    }if (gues==num){
        printf("Congrats! You guessed it right!\n");
    }
    return 0;
}
