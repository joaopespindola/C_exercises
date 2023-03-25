#include <stdio.h>
#include<math.h>
    int main() 
    {
        double A, B, C, Delta;
        scanf("%lf %lf %lf", &A, &B, &C);
        Delta = (B*B)-4*A*C;
        if (Delta >= 0 && A!=0) 
{
        printf("R1 = %.5lf\n", ((B*-1) + sqrt(Delta)) / (2*A));
        printf("R2 = %.5lf\n", ((B*-1) - sqrt(Delta)) / (2*A));
}       
        else 
{
        printf("Impossivel calcular\n");
}
        return 0;
}