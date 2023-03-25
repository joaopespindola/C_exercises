#include<stdio.h>
    int main()
    {
        int N, NH, NM, NS, resto;
        scanf("%d", &N);
        NH=N/3600;
        resto=N%3600;
        NM=resto/60;
        NS=resto%60;
        printf("%d:%d:%d\n", NH, NM, NS);
    }