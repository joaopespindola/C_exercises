#include<stdio.h>
    int main(){
        int N, X, Y;
        double Z;
        scanf("%d", &N);
        while(N--){
            scanf("%d %d", &X, &Y);
            if(Y==0)
            printf("divisao impossivel\n");
            else{
                Z=(double)X/Y;
                printf("%.1lf\n", Z);
            }

        }
        return 0;
    }