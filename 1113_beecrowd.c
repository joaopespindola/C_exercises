#include<stdio.h>
    int main(){
        int X, Y, i;
        X=0;
        Y=0;
        do{
            scanf("%d%d", &X, &Y);
            if(X>Y){
                printf("Decrescente\n");
            }
            else if(X<Y){
                printf("Crescente\n");
            }
        }
        while(X!=Y);
        return 0;
    }