#include<stdio.h>
    int main(){
        int i, vet [10];
        for(i=0; i<=9; i++){
            scanf("%d\n", &vet[i]);
        }
        for(i=9; i>=0; i--){
            printf("%d\n", vet[i]);
        }
    return 0;
    }