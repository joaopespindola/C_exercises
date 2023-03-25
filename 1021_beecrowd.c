#include<stdio.h>
    int main()
    {
        double N;
        int N100, N50, N20, N10, N5, N2, M1, M05, M025, M010, M005, M001, NI;
        scanf("%lf", &N);
        NI=N*100;
        N100=NI/10000;
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n", N100);
        N50=NI%10000/5000;
        printf("%d nota(s) de R$ 50.00\n", N50);
        N20=NI%10000%5000/2000;
        printf("%d nota(s) de R$ 20.00\n", N20);
        N10=NI%10000%5000%2000/1000;
        printf("%d nota(s) de R$ 10.00\n", N10);
        N5=NI%10000%5000%2000%1000/500;
        printf("%d nota(s) de R$ 5.00\n", N5);
        N2=NI%10000%5000%2000%1000%500/200;
        printf("%d nota(s) de R$ 2.00\n", N2);
        M1=NI%10000%5000%2000%1000%500%200/100;
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n", M1);
        M05=NI%10000%5000%2000%1000%500%200%100/50;
        printf("%d moeda(s) de R$ 0.50\n", M05);
        M025=NI%10000%5000%2000%1000%500%200%100%50/25;
        printf("%d moeda(s) de R$ 0.25\n", M025);
        M010=NI%10000%5000%2000%1000%500%200%100%50%25/10;
        printf("%d moeda(s) de R$ 0.10\n", M010);
        M005=NI%10000%5000%2000%1000%500%200%100%50%25%10/5;
        printf("%d moeda(s) de R$ 0.05\n", M005);
        M001=NI%10000%5000%2000%1000%500%200%100%50%25%10%5/1;
        printf("%d moeda(s) de R$ 0.01\n", M001);
        return 0;
    }