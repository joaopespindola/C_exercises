#include <stdio.h>

    int main()  
{
        double n1, n2, n3, n4, ef, M;
        scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
        
        M = (n1*2+n2*3+n3*4+n4)/10;
        printf("Media: %.1f\n", M);
        if (M >= 7.0){
        printf("Aluno aprovado.\n");
        }
        else if (M >= 5.0)
        {
        printf("Aluno em exame.\n");
        scanf("%lf", &ef);
        printf("Nota do exame: %.1f\n", ef);
        if (ef + M / 2.0 > 5.0){
        printf("Aluno aprovado.\n");
        }
        else   
        {
        printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (ef + M ) / 2.0);
        }
        else
        {
        printf("Aluno reprovado.\n");
        }
        return 0;
}