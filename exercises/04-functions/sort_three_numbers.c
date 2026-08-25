#include <stdio.h>

void troll(){
    int a, b, c, s, m, l;
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    printf("Third number: ");
    scanf("%d", &c);
    if(a>b&&a>c){
        l=a;
        if(b>c){
            m=b;
            s=c;
        }else{
            m=c;
            s=b;
        }
    }else if(b>a&&b>c){
        l=b;
        if(a>c){
            m=a;
            s=c;
        }else{
            m=c;
            s=a;
        }
    }else{
        l=c;
        if(a>b){
            m=a;
            s=b;
        }else{
            m=b;
            s=a;
        }
    }
    printf("%d %d %d \n", s, m, l);

}
int main (){
    int times;
    printf("Type how many time do you want to show 3 numbers in crescent order: ");
    scanf("%d", &times);
    for(int i=0; i<times; i++){
        troll();
    }
return 0;
}
