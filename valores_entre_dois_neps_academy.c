#include<stdio.h>
    int main(){
        int i, x, y, vma, vme;
            scanf("%d%d", &x, &y);
                if(x>y)vma=x, vme=y;
                else if (x<y) vma=y, vme=x;
            for(i=vme; i<=vma; i++)
                printf("%d ", i);
        return 0;
    }