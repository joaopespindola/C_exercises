#include<stdio.h>
    int main(){
        int i, x, y, xy;
        x = 0;
        i = 0;
        y = 0;
        xy = 0;
        scanf("%d%d", &x, &y);
        for(i=y+1; i<x; i++){
            if(i %2 != 0){
                xy += i;
            }
        }
        printf("%d\n", xy);
    return 0;
    }