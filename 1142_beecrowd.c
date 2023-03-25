#include <stdio.h>

    int main ()
    {

    int N, j, i, k, cont1;
    cont1 = 1;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        for (j = cont1, k = 0; k < 3; j++, k++)
        {
            printf("%d ", j);
        }
            printf("PUM\n");
            cont1 += 4;
    }
    return 0;
    }