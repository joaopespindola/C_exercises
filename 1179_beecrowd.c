#include<stdio.h>
    int main (){
        int N, par[5], impar[5], i, a=0, b=0, cont, cont2;
        for (i=1; i<=15; i++){
            scanf("%d", &N);
            if (N%2 == 0){
                par[a]=N;
                a=a+1;
                if(a==5){
                a=0;
                for(cont=0; cont<5; cont++){
                    printf("par[%d] = %d\n", cont, par[cont]);
                }
                }
            }
            else{
                impar[b] = N;
                b=b+1;
                if(b==5){
                b=0;
                for(cont2=0; cont2<5; cont2++){
                    printf("impar[%d] = %d\n", cont2, impar[cont2]);
                }
                }
            }
        }
        for(i=0; i<b; i++){
            printf("impar[%d] = %d\n", i, impar[i]);
        }
        for(i=0; i<a; i++){
            printf("par[%d] = %d\n", i, par[i]);
        }
  return 0;
}