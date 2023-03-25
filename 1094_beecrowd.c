#include<stdio.h>
    int main(){
        int N, C, i, TT, TC, TR, TS;
        float PC, PR, PS;
        char t;
        N=0; 
        C=0;
        i=0; 
        TC=0; 
        TR=0;
        TS=0; 
        TT=0;
        t=0;
        scanf("%d", &N);
        for(i=1; i<=N; i++){
            scanf("%d %c", &C, &t);
            if(t == 'C'){
            TC += C;
            }
            else if(t == 'R'){
            TR += C;
            }
            else if(t == 'S'){
            TS += C;
            }
        }
        TT=TC+TR+TS;
        PC=((float)TC*100)/TT;
        PR=((float)TR*100)/TT;
        PS=((float)TS*100)/TT;
        printf("Total: %d cobaias\n", TT);
        printf("Total de coelhos: %d\n", TC);
        printf("Total de ratos: %d\n", TR);
        printf("Total de sapos: %d\n", TS);
        printf("Percentual de coelhos: %.2f %%\n", PC);
        printf("Percentual de ratos: %.2f %%\n", PR);
        printf("Percentual de sapos: %.2f %%\n", PS);
    return 0;
    }