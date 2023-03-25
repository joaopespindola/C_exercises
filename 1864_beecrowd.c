#include <stdio.h>
#include <string.h>
    int main (){
        char x[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
        int y, i;
        scanf("%d", &y);
        for (i=0; i<y; i++){
            printf("%c", x[i]);
        }
        printf("\n");
        }