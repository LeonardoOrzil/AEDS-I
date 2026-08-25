#include <stdio.h>

int fun (int n){
    if (n==0){
        return 0;
    }else{
    return n;
    }
}

int main (){
    int n;
    scanf("%d", &n);
    for(int i=n; i>=0; i--){
        printf("%d\n", fun(i));
    }
return 0;
}
