#include <stdio.h>

int main (){
    int a=0, b=0, cem=0, cin=0, vin=0, dez=0, ci=0, doi=0, um=0;
    printf("digite o valor\n");
    scanf("%d", &a);

    while (a>=100){
        b=a-100;
        a=b;
        cem++;
    }while (a>=50){
        b=a-50;
        a=b;
        cin++;
    }while (a>=20){
        b=a-20;
        a=b;
        vin++;
    }while (a>=10){
        b=a-10;
        a=b;
        dez++;
    }while (a>=5){
        b=a-5;
        a=b;
        ci++;
    }while (a>=2){
        b=a-2;
        a=b;
        doi++;
    }while (a>=1){
        b=a-1;
        a=b;
        um++;
    }
    printf("%d notas de 100\n %d notas de 50\n %d notas de 20\n %d notas de 10\n %d notas de 5\n %d notas de 2\n %d moedas de 1", cem, cin, vin, dez, ci, doi, um);
return 0;
}
