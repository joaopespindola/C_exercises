#include<stdio.h>
int main(){
    int R1, R2, NT, i, soma;
    scanf("%d", &NT);
    for(i=0;i<NT;i++){
        scanf("%d%d", &R1, &R2);
        soma=R1+R2;
        printf("%d\n",soma);
    }
    return 0;
}