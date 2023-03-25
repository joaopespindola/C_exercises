#include<stdio.h>
    int main(){
        int i, x, xv;
        x = 0;
        i = 0;
        xv = 0;
        scanf("%d", &x);
        xv = x + 11;
        for(i=x; i<=xv; i++){
            if(i %2 != 0){
                printf("%d\n", i);
            }
        }
    return 0;
    }