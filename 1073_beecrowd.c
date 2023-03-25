#include<stdio.h>
    int main(){
        int i, N;
        N = 0;
        i = 0;
        scanf("%d", &N);
        for(i=1; i<=N; i++){
            if(i %2 == 0){
                printf("%d^2 = %d\n", i, i*i);
            }
        }
    return 0;
    }