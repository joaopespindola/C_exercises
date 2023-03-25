#include<stdio.h>
    int main()
{
        float X, A, B, C;
        A = 0;
        B = 0;
        C = 0;
        while(1){
            scanf("%f",&X);
            if(X < 0.0 || X > 10.0)
                printf("nota invalida\n");
            else{
                A += X;
                B++;
                if(B==2){
                    C/=2;
                    printf("media = %.2lf\n",A/2);
                    printf("novo calculo (1-sim 2-nao)\n");
                    while(1){
                        scanf("%f",&X);
                        if((int)X==1){
                            A = 0;
                            B = 0;
                            C=1;
                            break;
                        }
                        else if((int)X==2)
                            return 0;
                        else
                            printf("novo calculo (1-sim 2-nao)\n");
                    }
                }
            }
        }
        return 0;
    }