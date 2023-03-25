#include<stdio.h>
int main(){
    int M,N,i,Y;
    M=1;
    N=1;
    do {
        Y=0;
        scanf("%i %i",&M,&N);
        if (M<=0||N<=0) {
            break;
        }
        if (M>N){
            M+=N;
            N=M-N;
            M-=N;
        }
        for (i=M;i<=N;i++){
            printf("%d ",i);
            Y+=i;   
        }
        printf("Sum=%d\n",Y);
    } while (1);
    return 0;
}