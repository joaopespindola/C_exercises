#include<stdio.h>
    int main(){
        int i, N, cont;
        N = 0;
        i = 0;
        N=0;
        scanf("%d", &N);
        for(cont=1; cont <= N; cont++){
            scanf("%d", &i);
            if((i %2 == 0) && (i>0)){
                printf("EVEN POSITIVE\n");
            }
            else if((i %2 != 0) && (i>0)){
                printf("ODD POSITIVE\n");
            }
            else if((i %2 == 0) && (i<0)){
                printf("EVEN NEGATIVE\n");
            }
            else if((i %2 != 0) && (i<0)){
                printf("ODD NEGATIVE\n");
            }
            else if(i == 0){
                printf("NULL\n");
            }
            }
    return 0;
    }     