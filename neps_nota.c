#include<stdio.h>
    
int main()
{
    float N1, N2;
    scanf("%f", &N1);
    scanf("%f", &N2);
    if ((((N1*2)+(N2*3))/5) >= 7)
    {
        printf("Aprovado\n");
    }
    else if ((((N1*2)+(N2*3))/5) < 3)
    {
        printf("Reprovado\n");
    }
    else
    {
        printf("Final\n");
    }
    return 0;
}
