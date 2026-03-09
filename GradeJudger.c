#include <stdio.h>
int main (){
    float grade;
    printf("Insert your grade between 0 and 100\n");
    scanf("%f",&grade);
    if (grade<=100 && grade>=90){
        printf("excelent!\n");
    }else if (grade<=100 && grade>=70){
        printf("good!\n");
    }else if (grade<=100 && grade>=50){
        printf("regular\n");
    }else if (grade<=100 && grade<50 && grade>=0){
        printf("insuficient\n");
    }else{
        printf("type a viable number");
    }
return 0;
}
