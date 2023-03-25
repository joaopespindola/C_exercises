#include <stdio.h>
    int main (){
        int A, N, sum, i;
        sum = 0;
        scanf("%d", &A);
        do{
            scanf("%d", &N);
        } while(N<=0);
        for(i = 0; i < N; i++){
            sum += A + i;
        }
            printf("%d\n", sum);
        return 0;
    }