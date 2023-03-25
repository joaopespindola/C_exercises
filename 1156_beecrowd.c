#include <stdio.h>
    int main(){
        int i;
        float x, y;
        x=0;
        y=1;
        for(i=0; i< 40;i+=2){
            x+=(i/y);
            y+=(y+y);
        }
        printf("%.2f\n", x);
        return 0;
    }