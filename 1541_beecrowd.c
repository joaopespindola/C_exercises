#include<stdio.h>
#include<math.h>
int main(){
    int x, y, z, t;
    x=0;
    y=0;
    z=0;
    while(1){
        scanf("%i", &x);
        if (x==0)
            break;
        scanf("%d %d", &y, &z);
        t=sqrt(x*y*100/z);
        printf("%d\n", t);
    }
    return 0;
}