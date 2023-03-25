#include <stdio.h>
int main (){
    double S, NS;
    int i;
    scanf("%lf", &S);    
    if (S >=0 && S <= 400.00) {
    NS = S * 1.15;
    i = 15;
    }
    if (S >= 400.01 && S <= 800.00) {
    NS = S * 1.12;
    i = 12;
    }
    if (S >= 800.01 && S <= 1200.00) {
    NS = S * 1.1;
    i = 10;
    }
    if (S >= 1200.01 && S <= 2000.00) {
    NS = S * 1.07;
    i = 7;
    }
    if (S > 2000.00) {
    NS = S * 1.04;
    i = 4;
    }
    printf("Novo salario: %.2lf\n", NS);
    printf("Reajuste ganho: %.2lf\n", NS-S);
    printf("Em percentual: %i %%\n", i);
    return 0;
}