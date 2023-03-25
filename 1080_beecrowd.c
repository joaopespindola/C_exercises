#include<stdio.h>
    int main(){
        int i, x, maior,posicao;
        for(i=1;i<=100;i++){
            scanf("%d", &x);
            if(maior<x){
                maior=x;
                posicao=i;
            }

        }
        printf("%d\n%d\n", maior, posicao);
        
    return 0;
    }