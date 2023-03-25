#include <stdio.h>
    int main (){
        int N,X,i;
        X=1;
        scanf("%d", &N);
        for(i=N; i>=1; i--){
            X = X * i;
        }
        printf("%d\n", X);
        return 0;
    }