#include <stdio.h>

void notas(){
    float x, y, z;
    char m;
    printf("Type the grade one: ");
    scanf("%f", &x);
    printf("Type the grade two: ");
    scanf("%f", &y);
    printf("Type the grade three: ");
    scanf("%f", &z);
    printf("Type A for arithmetic mean, type P for weighted: ");
    scanf("%s", &m);
    if(m=='A' || m=='a'){
        printf("%2.f is the arithmetic mean\n", (x+y+z)/3);
    }else if(m=='P' || m=='p'){
        printf("%2.f is the weighted mean\n", (x*5+y*3+z*2)/10);//10=5+3+2
    }
}

int main(){
    int students;
    float x, y, z, m;
    printf("Type how many students you want: ");
    scanf("%d", &students);

    for(int i=0; i<students; i++){
        notas();
    }
return 0;
}
