#include<stdio.h>
    int main(){
        int X, Y, XM, YM, i;
        scanf("%d%d", &X, &Y);
        if(X>Y){
            XM=X;
            YM=Y;
        }
        if(Y>X){
            XM=Y;
            YM=X;
        }
        for(i=YM + 1; i<XM; i++){
        if(i %5 == 2 || i %5 == 3){
            printf ("%d\n", i);
        }
        }
    return 0;
    }