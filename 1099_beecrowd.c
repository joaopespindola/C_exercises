#include<stdio.h>
    int main(){
        int N, X, Y, Z, SI, i, cont2;
        SI=0;
        scanf("%d", &N);
        while(i<N){
            scanf("%d%d", &X,&Y);
            if(X==Y||X==Y+1||Y==X+1){
                printf("0\n");
            }
            else if(X<Y||X>Y){
                if(X>Y){
                    Z=X;
                    X=Y;
                    Y=Z;
                }
            for(cont2=0;cont2<N;cont2++){
                while(X<Y-1){
                    X+=1;
                    if(X%2!=0){
                    SI+=X;
                }
            }
        }
        printf("%d\n", SI);
        SI=0;
        }
        i++;
    }
    return 0;
}