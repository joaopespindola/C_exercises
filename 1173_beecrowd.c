#include <stdio.h>
    int main (){
        int i, x[10], cont;
        scanf ("%d", &x[0]);
        for(i=1; i<=9; i++){
            x[i] = x[i-1]*2;
        }
        for(cont=0; cont<=9; cont++){
            printf("N[%d] = %d\n", cont, x[cont]);
        }
    return 0;
    }