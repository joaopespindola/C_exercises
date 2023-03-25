#include<stdio.h>
    int main()
    {
        int dia, dfim, hora, hfim, minuto, minutofin, segundo, segundofin;

        scanf("Dia %d", &dia);
        scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
        scanf("Dia %d", &dfim);
        scanf("%d : %d : %d", &hfim, &minutofin, &segundofin);

        segundo = segundofin - segundo;
        minuto = minutofin - minuto;
        hora = hfim - hora;
        dia = dfim - dia;
        if (segundo < 0)
        {
        segundo += 60;
        minuto--;
        }

        if (minuto < 0)
        {
        minuto += 60;
        hora--;
        }

        if (hora < 0)
        {
        hora += 24;
        dia--;
        }

        printf("%d dia(s)\n", dia);
        printf("%d hora(s)\n", hora);
        printf("%d minuto(s)\n", minuto);
        printf("%d segundo(s)\n", segundo);
    return 0;
}
