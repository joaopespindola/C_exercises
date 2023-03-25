#include<stdio.h>
    int fibonacci(int x){
        int z;
        if(x==1 || x==2){
            return 1;
        }
        else{
            return fibonacci(x-1) + fibonacci(x-2);
        }
    }
    int main(){
        int h;
        scanf("%d", &h);
        printf("%d", fibonacci(h+1));
    }