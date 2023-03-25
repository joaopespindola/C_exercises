#include <stdio.h>
    int main(){
        int X,Y,i,A,B,C;
        i = 0;
        A = 0;
        B = 0;
        C = 0;
        while(1){
            scanf("%d%d",&X,&Y);
            C++;
            if(X==Y){
                B++;
            }
            else if(X>Y){
                i++;
            }
            else if(X<Y){
                A++;
            }
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&X);
            if(X==2)
                break;
        }
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",C,i,A,B);
            if(i==A){
                printf("Nao houve vencedor\n");
            }
            else if(i>A){
                printf("Inter venceu mais\n");
            }
            else if(i<A){
                printf("Gremio venceu mais\n");
            }
        return 0;
    }