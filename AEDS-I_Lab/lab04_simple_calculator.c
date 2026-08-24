int main (){
    int num1, option;

    printf("Type a number\n");
    scanf("%d", &num1);

    printf("Do you want\n 1 The double\n 2 the triple\n 3 The quadruple\n");
    scanf("%d", &option);

    switch (option){

        case 1:
            printf("%d", num1*2);
            break;
        case 2:
            printf("%d", num1*3);
            break;
        case 3:
            printf("%d", num1 *4);
            break;

    }

return 0;
}
