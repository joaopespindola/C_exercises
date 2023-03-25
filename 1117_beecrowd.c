#include <stdio.h>
    int main(){
        double W,X,Y,Z;
        Y=0;
        Z=0;
        while(1){
            if(Z==2)
            break;
            scanf("%lf", &W);
            if(W>=0 && W<=10){
            Z++;
            Y+=W;
            }
            else{
                printf("nota invalida\n");
                }
                }
                X=Y/2.0;
                printf("media = %.2lf\n", X);
    return 0;
}