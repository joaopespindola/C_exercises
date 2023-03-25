#include <stdio.h>

int main() {
    int n, i, soma, n2, p;

    for(i = 0; i <= 10; i++){
        scanf("%d", &n);
        if(n <= 10000) {
            if(i % 2 != 0){
            n2 = n;
            soma = n + n2;
            printf("%d\n", soma);}
        }
    }
    return 0;
}