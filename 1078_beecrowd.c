#include<stdio.h>
    int main(){
        int i, N;
        N = 0;
        i = 0;
        scanf("%d", &N);
        for(i=1; i<=10; i++){
            printf("%d * %d = %d\n", i, N, i*N);
        }
    return 0;
    }