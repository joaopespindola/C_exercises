#include<stdio.h>
    int main(){
        int vet [10], x, i, qv;
        qv=0;
        for(i=0; i<10; i++){
            scanf("%d ", &vet[i]);
        }
        scanf("%d", &x);
        for(int i=0; i<10; i++){
            if(x==vet[i]){
                qv++;
        }
        }
        if(qv>0){
        printf("%d\n", qv);
        for(int i=0; i<10; i++){
            if(x==vet[i]){
                printf("%d ", i);
        }
        }
        }
        else{
        printf("Mia x\n");
        }
    return 0;
    }