#include <stdio.h>
    int main(){
        int i, nv, num;
        nv = 0;
        num = 0;
        for(i = 1; i <= 5; i++){
        scanf("%d", &num);
            if(num%2==0){
                nv += 1;
            }
        }
        printf("%d valores pares\n", nv);   
    return 0;
    }
    