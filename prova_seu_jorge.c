#include <stdio.h>
    int main(){
        float quantidade;
        int X;
        scanf("%f", quantidade);
        X=2*quantidade;
        if(quantidade == 3){
            printf("%d\n", X-(X*0.10));
        }
        else if(quantidade >= 5 && < 7){
            printf("%d\n", X-(X*0.15));
        }
        else if(quantidade >= 7 && < 10){
            printf("%d\n", X-(X*0.25));
        }
        else if(quantidade >= 10){
            printf("%d\n", X-(X*0.3));
        }
    return 0;
    }