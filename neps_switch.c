#include<stdio.h>
int main()
{
    int X, Y, Z;
    scanf("%d%d%d", &X, &Y, &Z);
    switch(Z)
    {
        case 1:
            printf("%d%d\n", X + Y);
            break;
        case 2:
            printf("%d%d\n", X - Y);
            break;
        case 3:
            printf("%d%d\n", X * Y);
            break;
        case 4:
            printf("%d%d\n", X / Y);
            break;
        default:
            printf("insira um número entre 1 e 4 e tente novamente\n");
    }
    return 0;
}