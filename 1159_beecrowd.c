#include <stdio.h>
    int main (){
        int X, Y, N, sum;
        sum=0;
        Y=0;
        N=0;
        sum=0;
        do{
            scanf("%d", &X);
            if(X==0){
                return 0;
            }
            for(N=0, Y=X; N<5; Y++){
                if(Y%2 == 0){
                    sum += Y;
                    N++;
                }
            }
            printf("%d\n", sum);
            sum=0;
        }while(X!=0);
        return 0;
    }