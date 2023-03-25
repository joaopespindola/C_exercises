#include <stdio.h>
    int main (){
        int X, Y, N, a, b, i, sum;
        sum=0;
        scanf("%d", &N);
        for (i = 0; i < N; i++){
            scanf("%d %d", &X, &Y);
                for (b=0, a=X; b<Y; a++){
                    if (a%2 != 0){
                    sum += a;
                    b++;
                }
                }
            printf("%d\n", sum);
            sum=0;
        }
    }