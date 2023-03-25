#include<stdio.h>
    int main()
    {
        int X, Y;
        scanf("%d%d", &X, &Y);
        if (X==1)
        {
            printf("TOTAL: R$ %.2lf\n", 4.00*Y);
        } 
        if (X==2)
        {
            printf("TOTAL: R$ %.2lf\n", 4.50*Y);
        }
        if (X==3)
        {
            printf("TOTAL: R$ %.2lf\n", 5.00*Y);
        }
        if (X==4)
        {
            printf("TOTAL: R$ %.2lf\n", 2.00*Y);
        }
        if (X==5)
        {
            printf("TOTAL: R$ %.2lf\n", 1.50*Y);
        }  
        return 0;     
    }