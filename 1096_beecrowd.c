#include<stdio.h>
    int main(){
        int i, j;
        i = 1;
        j = 7;
        while(i<=9){
            printf("I=%d J=%d\n", i, j);
            j=j-1;
            if(j==4){
                j=7;
                i=i+2;
            }

        }
    return 0;
    }
    