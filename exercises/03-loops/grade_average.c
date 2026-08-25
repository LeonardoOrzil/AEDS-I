#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float mediade(float t, float q){
    return t/q;
}
int main (){
    float x, qnt=0, tot=0, b, ap=0, ds=0, maxgrade;
    printf("Insert how much the test is worth\n");
    scanf("%f", &maxgrade);
    printf("Insert the grades of the students\nType -1 to end\n");
    while (x>=0){
      if(x>maxgrade){
         printf("Grade can not be greater than how much the test is worth");
         
         }else if(x<0){}else{
        qnt++;
        tot=tot+x;
        printf("...\n");
        scanf("%f", &x);
        if(x>=maxgrade*0.6){
            printf("Approved!\n");
            ap++;
        }else{
            printf("Disapproved\n");
            ds++;
        }
         }
    }
    b=mediade(tot, qnt);
    printf("%2.f is the average of the grades \n%0.f is the total amount of students \n%0.f is the amount of approved students\n%0.f is the amount of disapproved students \n", b, qnt, ap, ds);


return 0;
}
