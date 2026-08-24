#include <stdio.h>

int troll(int a){
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int cont=0, a;
    printf("Type 3 numbers\n");
    for(int i=0; i<3; i++){
        scanf("%d", &a);
        cont=troll(a)+cont;
    }
    printf("%d is the amount of even numbers typed", cont);
return 0;
}
