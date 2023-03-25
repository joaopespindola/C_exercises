#include <stdio.h>
    int main (){
        int T, PA, PB, i1, i2;
        double G1, G2;
        scanf("%d", &T);
        for (i2=0; i2<T; i2++){
            scanf("%d %d ", &PA, &PB);
            scanf("%lf %lf ", &G1, &G2);
            while (PA<=PB && i1<=100){
                PA += (int)((PA*G1)/100);
                PB += (int)((PB*G2)/100);
                i1++;}
            if(i1>100){
                printf("Mais de 1 seculo.\n");
            }
            else{
                printf("%d anos.\n", i1);
                }
            i1=0;
        }
    }