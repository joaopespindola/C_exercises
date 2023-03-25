#include<stdio.h>
    int main()
    {
        int H, N;
        float porhora;
        scanf("%d", &N);
        scanf("%d%f", &H, &porhora);
        printf("NUMBER = %d\n", N);
        printf("SALARY = U$ %.2f\n", H*porhora);
        return 0;
    }