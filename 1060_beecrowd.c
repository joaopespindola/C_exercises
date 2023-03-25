#include <stdio.h>
    int main(){
        int i, nv;
        nv = 0;
        float num;
        for(i = 1; i <= 6; i++){
        scanf("%f", &num);
            if(num >= 0){
                nv = nv + 1;
            }
        }
        printf("%d valores positivos\n", nv);   
    return 0;
    }
    