#include <stdio.h>

int max2 (int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

int max3 (int a, int b, int c){
    if (max2(a,b)>c){
        return max2(a,b);
    }else{
    return c;
    }

}

int main (){
    int a, b, c;
    printf("Type three number to see who is the greater:\n");
    scanf("%d%d%d", &a, &b, &c);

    printf("The greater number between the three is %d", max3(a,b,c));
return 0;
}
