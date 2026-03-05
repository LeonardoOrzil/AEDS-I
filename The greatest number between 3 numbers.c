#include <stdio.h>

int main () {
    int x=0, y=0, z=0;

    printf("type your first number\n");
    scanf("%d",&x);
    printf("type your second number\n");
    scanf("%d",&y);
    printf("type your third number\n");
    scanf("%d",&z);

    if (x>y && x>z){
        printf("The greatest number is %d",x);
    }else if (y>x && y>z){
        printf("The greatest number is %d",y);
    }else if (z>x && z>y){
        printf("The greatest number is %d",z);
    }else{
        printf("They are all equal");
    }
return 0;
}

