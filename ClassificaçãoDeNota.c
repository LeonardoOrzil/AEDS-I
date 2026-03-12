#include <stdio.h>

int main (){
    float nota;
    printf("Digite sua nota\n");
    scanf("%f", &nota);
    if (nota>=80){
        printf("Conceito A");
    }else if (nota>=60){
        printf("Conceito B");
    }else if (nota>=40){
        printf("Conceito C");
    }else if (nota<40){
        printf("Conceito D");
    }
return 0;
}
