#include<stdio.h>
    int main()
    {
        int T, Vm;
        double D;
        scanf("%d%d", &T, &Vm);
        D = Vm * T;
        printf("%.3lf\n", D/12);
        return 0;
    }