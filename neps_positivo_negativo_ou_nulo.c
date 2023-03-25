#include<stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    if(X > 0)
    {
        printf("positivo\n");
    }
    else
    if(X < 0)
    {
        printf("negativo\n");
    }
    else
    {
        printf("nulo\n");
    }
    return 0;
}