#include<stdio.h>
    int main(){
        int N, i, e20, fe20, X;
        scanf("%d", &N);
        e20=0;
        fe20=0;
        X=0;
        for(i=0; i<N; i++){
            scanf("%d", &X);
            if((X >= 10) && (X <= 20)){
                e20++;
            }
            else{
                fe20++;
            }
        }
        printf("%d in\n", e20);
        printf("%d out\n", fe20);
    return 0;
    }