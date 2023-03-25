#include <stdio.h>
int main() {
    int X,Y,so,i;
    so=0;
    scanf("%d%d",&X,&Y);
    if(X<Y){
       for(i=X; i<=Y; i++){
            if(i%13 != 0)
                so += i;
       }
    }
    else{
        for(i=Y; i<=X; i++){
            if(i%13 != 0)
                so += i;
        }
    }
    printf("%d\n",so);
    return 0;
}