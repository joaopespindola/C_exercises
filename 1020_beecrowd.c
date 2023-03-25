#include<stdio.h>
    int main()
    {
        int I, A, M ,D, RESTO, RESTO2;
        scanf("%d", &I);
        A=I/365;
        RESTO=I%365;
        M=RESTO/30;
        D=RESTO%30;
        printf("%d ano(s)\n", A);
        printf("%d mes(es)\n", M);
        printf("%d dia(s)\n", D);
        return 0;
    }