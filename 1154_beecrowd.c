#include <stdio.h>
    int main (){
        int X, i, x;
        float z;
        x=0;
        i=0;
        z=0;
        do{
            scanf("%d", &X);
            if(X<0){
                break;
            }
            z += X;
            i++;
        }while(X>0);
        printf("%.2lf\n", z/i);
    return 0;
    }