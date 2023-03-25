#include <stdio.h>
    int main(){
        int i, vpa, vim, vne, vpo, num;
        vpa = 0;
        vim = 0;
        vne = 0;
        vpo = 0;
        num = 0;
        for(i = 1; i <= 5; i++){
        scanf("%d", &num);
            if(num%2==0){
                vpa += 1;
            }
            if(num%2!=0){
                vim += 1;
            }
            if(num > 0){
                vpo += 1;
            }
            if(num < 0){
                vne += 1;
            }
        }
        printf("%d valor(es) par(es)\n", vpa);   
        printf("%d valor(es) impar(es)\n", vim);
        printf("%d valor(es) positivo(s)\n", vpo);
        printf("%d valor(es) negativo(s)\n", vne);
    return 0;
    }
    