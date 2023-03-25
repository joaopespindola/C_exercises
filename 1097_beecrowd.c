#include<stdio.h>
    int main(){
        int i, j, x;
        i = 1;
        j = 7;
        x = 0;
        while(i<10){
            printf("I=%d J=%d\n", i, j);
            j=j-1;
            x=x+1;
            if(x==3){
                j=j+5;
                i=i+2;
                x=0;
            }

        }
    return 0;
    }