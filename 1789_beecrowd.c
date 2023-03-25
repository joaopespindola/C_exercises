#include <stdio.h>
    int main(){
        int vm, x, y, z;
        while(scanf("%d",&x) != EOF){
            for(y=0, vm=0; y<x; y++){
                scanf("%d", &z);
                if(vm<z){
                    vm=z;
                }
            }
            if(vm<10){
                printf("1\n");
            }
            else if(vm<20){
                printf("2\n");
            }
            else{
                printf("3\n");
            }
        }
    return 0;
}