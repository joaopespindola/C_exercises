#include<stdio.h>
#include<stdlib.h>
    int main()
    {
        int a, b, C, MaiorAB;
        scanf("%d%d%d", &a, &b, &C);
        MaiorAB = (a+b+abs(a-b))/2 ;
            if (MaiorAB > C)
            {
                printf("%d eh o maior\n", MaiorAB);
            }    
            if (MaiorAB < C)
            {      
                printf("%d eh o maior\n", C);
            }
        return 0;
    }