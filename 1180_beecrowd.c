#include <stdio.h>
    int main(){
    int i, y, N, z;
        scanf("%d", &N);
        int X[N];
        for(i=0; i<N; ++i){
            scanf("%d", &X[i]);
        }
        for(i=1; i<N; ++i){
            if(X[0]>X[i]){
                X[0]=X[i];
                y=i;
            }
        }
        printf("Menor valor: %d\nPosicao: %d\n", X[0], y);
    return 0;
    }
