#include <stdio.h>
    int main (){
        int X, i;
        do{
            scanf("%d", &X);
        if (X == 0){
            return 0;
        }
        for (i = 1; i < X; i++){
            printf("%d ", i);
        }
        printf("%d\n", i);
        } while (X != 0);
    return 0;
}