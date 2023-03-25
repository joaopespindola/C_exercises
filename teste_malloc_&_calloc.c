#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p, i;
    p = (int*)malloc(sizeof(int) *2);
    for(i=0; i<10; i++){
        if(i<2){
            p[i] = i;
        }
        else{
            p = (int*)realloc(p, sizeof(int) *10);
            p[i] = i;
        }
        printf("%d\n", p[i]);
    }
}