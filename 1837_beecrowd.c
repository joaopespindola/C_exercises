#include <stdio.h>
    int main (){
        signed short int r, rr, x, y;
            scanf("%hd %hd", &x, &y);
            r=(int)x/y;
            rr=x%y;
            printf("%d %d\n", r, rr);
        return 0;
    }