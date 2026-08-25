#include <stdio.h>
#include <stdlib.h>

int main(){
    float grades=0, students=0, med, max=0, min=10000, total=0;
    printf("Insert the grades of the students\n Type -1 when you finish\n");

    while(grades!=-1){
        scanf("%f", &grades);
        if(grades!=-1){
            students++;
            total=grades+total;
            if (grades>max){
                max=grades;
            }if(grades<min){
                min=grades;
            }
        }
    }
    med=total/students;
    printf("%.0f is the total of students\n%.2f is the average of the grades \n%.2f is the greatest grade \n%.2f is the worst grade\n", students, med, max, min);
return 0;
}
