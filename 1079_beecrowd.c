#include<stdio.h>
    int main(){
        int i;
        float N, v1, v2, v3, mp;
        N = 0;
        i = 0;
        v1 = 0;
        v2 = 0;
        v3 = 0;
        scanf("%f", &N);
        for(i=1; i<=N; i++){
            scanf("%f%f%f", &v1, &v2, &v3);
            mp = ((v1*2)+(v2*3)+(v3*5))/10;
            printf("%.1f\n", mp);
        }
    return 0;
    }