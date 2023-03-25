#include<stdio.h>
int main (){
    int lin, col, tam;
	while(scanf("%d", &tam)!=EOF){
		short mat[tam][tam];
		for (lin=0; lin<tam; lin++){
			for (col=0; col<tam; col++){
				if (lin==col){
					mat[lin][col] = 1;
                }
				if (lin==tam-col-1){
					mat[lin][col] = 2;
                }
				if (lin!=col && lin!=tam-col-1){
					mat[lin][col] = 3;
                }
			}
        }
		for (lin=0; lin<tam; lin++)
		{
			for (col=0; col<tam; col++){
				printf("%d", mat[lin][col]);
            }
            printf("\n");
		}
	}
    return 0;
}