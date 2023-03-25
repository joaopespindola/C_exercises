#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool *criaMatriz(){
    bool *deuCerto;
    int linha, coluna, **matriz, i;
    printf("Digite a quantidade de linhas e colunas da matriz ");
    scanf("%d %d", &linha, &coluna);
    matriz = malloc(linha*sizeof(int));
    if(matriz != NULL){
        *deuCerto = true;
    }else *deuCerto = false;
    for(i = 0; i < linha; i++){
        matriz[i] = malloc(coluna * sizeof(int));
    }
    //inserindo 0 em todas as posições da matriz
    for(i = 0; i < linha; i++){
        for(int aux = 0; aux < coluna; aux ++){
            matriz[i][aux] = 0;
        }
    }

    for(i = 0; i < linha; i++){
        for(int aux = 0; aux < coluna; aux ++){
            printf("%d ", matriz[i][aux]);
        }
        printf("\n");
    }
    return deuCerto;
}

int main(){
    bool *booleandro;
    *booleandro = criaMatriz();
    //printf("%d", &booleandro);
}