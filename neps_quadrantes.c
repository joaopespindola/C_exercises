#include<stdio.h>
    
int main()
{
    int X, Y;
    scanf("%d%d", &X, &Y);
    if (X > 0 && Y>0)
    {
        printf("Q1\n");
    }
    if (X < 0 && Y > 0)
    {
        printf("Q2\n");
    }
    if (X < 0 && Y < 0)
    {
        printf("Q3\n");
    }
    if (X > 0 && Y < 0)
    {
        printf("Q4\n");
    }
    if (X == 0 || Y == 0)
    {
        printf("eixos\n");
    }
    return 0;
}