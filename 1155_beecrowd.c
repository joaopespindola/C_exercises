#include <stdio.h>
    int main(){
        int i;
        float x, y;
        x=0;
        y=1.0;
        for(i=1; i<=100; i++){
            x += (1/y);
            y++;
        }
        printf("%.2f\n", x);
        return 0;
    }