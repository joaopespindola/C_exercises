#include<stdio.h>
    int main(){
        int i, X, N, cont, a;
        scanf("%d", &N);
        for(i=1; i<=N; i++){
            a=0;
            scanf("%d", &X);
            if(X<=3){
                printf("%d eh primo\n", X);
            }
            else{
                for(cont=2; cont<X; cont++){
                    if(X%cont == 0){
                        a=1;
                        break;
                    }
                    else{
                        a=2;
                    }
                }
            }
        if(a==1){
            printf("%d nao eh primo\n", X);
        }
        if(a==2){
            printf("%d eh primo\n", X);
        }
        }
    return 0;
    }