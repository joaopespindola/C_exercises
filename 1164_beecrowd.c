#include <stdio.h>
    int main(){
        int N, X, cont, i, b, c;
        c=0;
        scanf("%d", &N);
        for(cont=1; cont<=N; cont++){
            scanf("%d", &X);
            b=X/2; c=0;
            for(i=1; i<=b; i++){
                if(X%i == 0)
                    c+=i;
            }
            if(c==X){
                printf("%d eh perfeito\n", X);
            }
            else{
                printf("%d nao eh perfeito\n", X);
            }
        }
    return 0;
}