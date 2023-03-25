#include<stdio.h>
    int main(){
        int i, L, cont;
        float M[12][12], s, m, elem;
        s=0;
        m=0;
        char X;
        scanf("%d %c", &L, &X);
        for(cont=0; cont<12; cont++){
            for(i=0; i<12; i++){
                scanf("%f", &elem);
                M[cont][i] = elem;
            }
        }
        if(X == 'S'){
            for(i=0; i<=11; i++){
            s += M[L][i];
            }
            printf("%.1f\n", s);
        }
        else{
            if(X == 'M'){
            for(i=0; i<=11; i++){
            s += M[L][i];
            }
            m = s/12;
            printf("%.1f\n", m);
            }
        }
    return 0;
    } 