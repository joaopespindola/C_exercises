#include <stdio.h>
#include <stdlib.h>

void parOuImpar(){
  int n, i, par=0, impar=0, *x;
  printf("Quantos inteiros serao lidos: ");
  scanf("%d",  &n);
  x = (int *) malloc(n * sizeof(int));
  for(i = 1; i <= n; i++){
    printf("%do. inteiro: ", i);
    scanf("%d", &x[i]);
    printf("\n");
    if(x[i]%2==0){
      par++;
    }else{
      impar ++;
    }
  }
  printf("Sao pares: %d dos %d inteiros lidos\n", par, n);
  printf("Sao impares: %d dos %d inteiros lidos\n", impar, n);
  free(x);
}
int pontosDigitados(){
    typedef struct{
        int x, y;
    } coordenadas;
    coordenadas *P;
    int i;
    printf("%d\n", sizeof(coordenadas));
    int tamN;
    printf("Quantos pontos deseja digitar? ");
    scanf("%d", &tamN); 
    setbuf(stdin, NULL);
    P = (coordenadas *) malloc(tamN*sizeof(coordenadas));
    if(P==NULL){
        printf("BO na alocacao\n");
    }
    printf("%d\n", sizeof(P));
    for(i=0; i<tamN; i++){
        printf("Entre com a coordenada x do ponto %d: ", i+1);
        scanf("%d", &P[i].x);
        setbuf(stdin, NULL);
        printf("Entre com a coordenada y do ponto %d: ", i+1);
        scanf("%d", &P[i].y);
        setbuf(stdin, NULL);
    }
    printf("Pontos digitados: ");
    for(int aux = 0; aux<tamN; aux++){
        printf("(%d,%d)", P[aux].x, P[aux].y);
    }
    free(P);
}

void aloca5(){
  int *x, i;
  x = (int *) malloc(5 * sizeof(int));
  for(i=0; i<5; i++){
    printf("Digita um inteiro ");
    scanf("%d", &x[i]);
  }
  for(i=0; i<5; i++){
    printf("%d ", x[i]);
  }
  free(x);
}

int main(void) {
  int x;
  printf("Opcao da funcao q ce quer ");
  scanf("%d", &x);
  if(x == 1){
  double *produtos;
  int n, i;

  printf("Informe o número de produtos ");
  scanf("%d", &n);
/*vamos alocar a memória necessária para a quantidade (n) de produtos*/
  produtos = (double *) malloc(n * sizeof(double));
  for(i = 0; i < n; i++){
    printf("Informe o valor do produto %d R$: ", i+1);
    scanf("%lf", &produtos[i]);
  }

  printf("\nProdutos %d - R$: %lf\n", i+1, produtos[i]);

  free(produtos);
    }
    if(x == 2){
        aloca5();
    }
    if(x==3){
        parOuImpar();
    }
    if(x==4){
        pontosDigitados();
    }
  return 0;
}