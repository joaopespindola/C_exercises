#include<stdio.h>
    int main(){
        int i, I, J;
        i = 0;
        J = -2;
        for(i=60; i>=0; i--){
            if(i%5==0){
                J+=3;
                printf("I=%d J=%d\n", J, i);
            }
            }
    return 0;
    }