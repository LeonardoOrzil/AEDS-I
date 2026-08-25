#include <stdio.h>
#include <stdlib.h>

int main (){
    int conti, contn, contp, contz, valor;

    printf("Type how many numbers will you type\n");
    scanf("%d", &conti);
    printf("type the numbers\n");
    for(int i=0; i<conti; i++){
        scanf("%d", &valor);
        if(valor==0){
            contz++;
        }else if(valor>0){
            contp++;
        }else{
            contn++;
        }
    }
    printf("%d Positives \n%d Negatives \n%d zeros", contp,contn, contz);

return 0;
}
