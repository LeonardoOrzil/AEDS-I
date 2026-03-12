#include <stdio.h>

int main (){
    int mon=0, matri, age;

    printf("Voce e um monitor?\n digite 1 para sim e 2 para nao\n");
    scanf("%d", &mon);
    if (mon==1){
        printf("Acesso permitido");
        return 0;
    }else{

    }printf("Digite sua idade\n");
    scanf("%d", &age);
    if (age<16){
        printf("Acesso negado");
    }else{
        printf("Esta matriculado na disciplina de programação?\n digite 1 para sim e digite 2 para nao\n");
        scanf("%d", &matri);
        if (matri==1){
            printf("Acesso permitido");
        }else{
            printf("Acesso negado");
        }
    }
return 0;
}
