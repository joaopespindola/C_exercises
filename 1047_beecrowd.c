#include<stdio.h>
    int main()
    {
        int hinicial, minicial, htotal, mtotal, hfinal, mfinal, hr, mr;
        scanf("%d%d%d%d", &hinicial, &minicial, &hfinal, &mfinal);
        mtotal = hinicial * 60 + minicial;
        htotal = hfinal * 60 + mfinal;
            if(mtotal >= htotal)
            {
                hfinal = hfinal + 24;
                mtotal = hinicial * 60 + mfinal;
                htotal = hfinal * 60 + mfinal;
                htotal = htotal - mtotal;
                hr = htotal / 60;
                mr = htotal % 60;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, mr); 
            }
            else
            {
                htotal = htotal - mtotal;
                hr = htotal / 60;
                mr = mtotal % 60;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, mr);
            }
    return 0;
    }