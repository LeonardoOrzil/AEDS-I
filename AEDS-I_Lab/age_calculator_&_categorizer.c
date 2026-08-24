#include <stdio.h>
#include <string.h>

int main () {
    int age, byear, nyear, by=0;


    printf("type the year when you were born\n");
    scanf("%d", &byear);
    printf("type the year that you're in now\n");
    scanf("%d", &nyear);
    printf("did already had your birthday this year?\n type 1 for yes, type 2 for no\n");
    scanf("%d", &by);

    age=nyear-byear;

    if (by==2){
        age=age-1;
    }else{
        age=age;
    }
    if (age<=12){
    printf("%d is your age\nYou are a child", age);
    }else if (age<=17){
    printf("%d is your age\nYou are a teenager", age);
    }else if (age<=59){
    printf("%d is your age\nYou are an adult", age);
    }else{
    printf("%d is your age\nYou are an elderly", age);
    }

return 0;
}
