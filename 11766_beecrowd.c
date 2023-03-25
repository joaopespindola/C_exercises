#include<stdio.h>
    int main(){
        long long n, x, y, z, c;
        int i, aux;
        z=0;
        y=1;
        x=0;
        scanf("%d", &aux);
        for(i=1; i<=aux; i++, x = 0, y = 1){
            scanf("%lld",&n);
            n+=1;
            for( c = 0 ; c < n ; c++ ){
                if (c <= 1){
                    z = c;
                }
                else{
                    z = x + y;
                    x = y;
                    y = z;
                }
            }
                printf("Fib(%lld) = %lld\n",n-1,z);
        }
    return 0;
    }