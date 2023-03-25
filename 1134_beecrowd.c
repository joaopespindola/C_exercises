#include<stdio.h>
    int main(){
        int i, alc, gas, die;
        alc=0;
        gas=0;
        die=0;
        do{
            i=0;
            scanf("%d", &i);
            if(i==1){
                alc ++;
            }
            if(i==2){
                die ++;
            }
            if(i==3){
                gas ++;
            }
        }while(i != 4);
        printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, die, gas);
    return 0;
}