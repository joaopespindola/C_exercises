#include<stdio.h>
    int main()
    {
        double R, pi;
        pi = 3.14159;
        scanf("%lf", &R);
        printf("VOLUME = %.3lf", (4/3.0) * pi * R*R*R);
        return 0;
    }