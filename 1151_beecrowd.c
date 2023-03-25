#include <stdio.h>
    int main (){
        int n, i, x, y, z;
        x = 0;
        y = 1;
        z = 0;
        scanf("%d", &n);
        if(n==1 || n==0){
        printf("%d", x);
        return 0;
        }
        printf("%d ", x);
        for(i = 2; i < n; i++){
            x = y;
            y = z;
            z = x + y;
            printf("%d ", z);
        }
        printf("%d\n", z+y);
        return 0;
        }