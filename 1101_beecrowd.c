#include<stdio.h>
    int main(){
        int M, N, i, V1, V2, X, S;
        M=1;
        N=1;
        scanf("%d%d", &M,&N);
        if(M>N){
            V1=M;
            N=V2;
        }
        if(M<N){
            V2=M;
            V1=N;
        }
        for(i=V2; i<=V1; i++){
        if(V1<=0||V2<=0)break;
        X==i;
        if(i<=V1){
        printf("%d ", i);
        S+=i;
        }
        if(i==V1){
            printf("Sum=%d\n", S);
            continue;
        }
        }
    return 0;
}