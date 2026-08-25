#include <stdio.h>
#include <stdlib.h>

int main (){
    int conti, contn, contp, contz, valor, perp, pern, perz;

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

    perp=(contp*100)/conti;
    pern=(contn*100)/conti;
    perz=(contz*100)/conti;
    printf("%d%% Positives %d%% Negatives %d%% zeros", perp, pern, perz);

return 0;
}
