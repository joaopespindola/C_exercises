#include <stdio.h>
    int main(){
        int i, nv;
        float num, soma, media;
        nv = 0;
        num = 0;
        soma = 0;
        for(i = 1; i <= 6; i++){
        scanf("%f", &num);
            if(num > 0){
                nv += 1;
                soma += num; 
            }
        }
        media = soma/nv;
        printf("%d valores positivos\n", nv);
        printf("%.1f\n", media);
        
    return 0;
    }
    