#include <stdio.h>
    int main (){
        int X, Z, i, s, sum;
        s = 1;
        Z = 0;
        sum = 0;
        scanf("%d", &X);
        do{
            scanf("%d", &Z);
        }while(Z<=X);
        sum = X;
        do{
            X++;
            sum += X;
            s++;
        }while(sum<=Z);
        printf("%d\n", s);
    return 0;
    }