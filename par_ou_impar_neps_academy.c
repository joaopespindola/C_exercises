#include<stdio.h>
    int parouimpar(int x){
        if(x%2==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int main(){
        int cin, bin;
        scanf("%d%d", &cin, &bin);
        if(parouimpar(cin+bin)){
            printf("Bino\n");
        }
        else{
            printf("Cino\n");
        }
    }