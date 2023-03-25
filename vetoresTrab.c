
/*Trabalho 01 de ED
Feito por: 
João Pedro Cruz Espíndola 12111BSI245
Atílio de Melo Faria 12111BSI233
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

//A struct dados armazena as coordenadas e o valor do ponto para auxiliar na construção da matriz
typedef struct {
  int linha, coluna, valor;
  
} Dados;

//A struct Pilha armazena o "trajeto" com auxílio de um vetor e um int para o topo
typedef struct {
  Dados elementos [MAX];
  int topo;
  int vezesEmpilhado;

} Pilha;

//Aqui iremos definir a matriz que será usada posteriormente
void definir (int n , int matriz[n][n], int a){
  int origem, destino, custo, i, j;

  //adicionando 0 em todas as posições da matriz
  for(i=0; i<n; i++){
    for(j=0;j<n;j++){
      matriz[i][j] = 0;
    }
  } 

  //lendo e armazenando qual será o trajeto e quanto ele custará 
  for(i=0; i<a; i++){
    scanf("%d %d %d", &origem, &destino, &custo);
    //-1 para se adequar aos padrões da linguagem C
    matriz[origem-1][destino-1] = custo;
  } 

  // for para printar a matriz
  // for(i=0; i<n; i++){
  //   for(j=0;j<n;j++){
  //     printf ("\t%d",matriz[i][j]);
  //   }
  //   printf("\n");
  // }
}

//aqui vamos criar e alocar memória suficiente para a pilha
Pilha* criar(int *DeuCerto){
    Pilha* p;

    p = (Pilha*) malloc(sizeof(Pilha));
    if (p == NULL) *DeuCerto = 0; // 0 == false
    else {
        p->topo = -1;
        p->topo = 0;
        *DeuCerto = 1;
    }

    return p;
}

//aqui nós criaremos um vetor de pilhas
void vetor_pilhas (Pilha *p[], int vertices, int *DeuCerto){
  int i;
   for (i=0; i<vertices; i++){
    p[i] = criar (DeuCerto);
  }
}

//função para verificar se a pilha está cheia
int cheia(Pilha *p){
    if (p->topo == MAX-1) // a pilha esta cheia
        return 1;   // 1 == true
    else return 0;  // 0 == false
}

//função para verificar se a pilha está vazia
int vazia(int saida, Pilha *p [])
{
    if (p[saida]->topo == -1) // a pilha esta vazia
        return 1;   // 1 == true
    else return 0;  // 0 == false
}

void empilhar(Pilha *p[], int vertices, int matriz[vertices][vertices], int *DeuCerto){
  
  int coluna, linha=0;
    if (cheia(p[linha]) == 1) // pilha cheia
        *DeuCerto = 0;
    else {  // pilha nao tah cheia
      /*laço de repetição para percorrer a matriz e empilhar o valor da aresta quando o mesmo for diferente de 0*/
      while(linha<vertices){
        for(coluna=0; coluna<vertices; coluna++){
          if (matriz[linha][coluna] != 0){
          p[linha]->topo = p[linha]->topo + 1;
          p[linha]->vezesEmpilhado = p[linha]->vezesEmpilhado + 1;
          p[linha]->elementos[p[linha]->topo].valor = matriz[linha][coluna];
          p[linha]->elementos[p[linha]->topo].linha = linha;
          p[linha]->elementos[p[linha]->topo].coluna = coluna;
          *DeuCerto = 1;
            //printf ("valor de deu certo: %d\n", *DeuCerto);
          }else{
            //linha preenchida com 0
          }
        }
        linha ++;
      }
    }  
}


void empilhar_p1(Pilha *pilha1,int i, Pilha *p[], int *Dc1, int chegada){

  if (vazia(i, p) == 1){ // pilha vazia
    *Dc1 = 0;
  }else{  // pilha nao tah vazia
    //
    while(p[i]->topo>=0){
      pilha1->topo = pilha1->topo + 1;
      pilha1->vezesEmpilhado = pilha1->vezesEmpilhado + 1;
      pilha1->elementos[pilha1->topo] = p[i]->elementos[p[i]->topo];
      p[i]->topo = p[i]->topo - 1;
      if(pilha1->elementos[pilha1->topo].coluna == chegada){
        *Dc1 = 1;
        return;
      }
    }
  }
} 

//função para caso não exista o caminho desejado
void da_errado (Pilha *pilha1, Pilha *pilha2, int *Dc){
  if(pilha1->elementos[pilha1->topo].linha == pilha2->elementos[pilha2->topo].linha){
    pilha2->topo = pilha2->topo - 1;
  }else{
    pilha2->topo = pilha2->topo - 1;
    if(pilha1->elementos[pilha1->topo].linha == pilha2->elementos[pilha2->topo].linha){
      pilha2->topo = pilha2->topo - 1;
    }
  }
}

// int* soma_percurso(Pilha *pilha2){
//   int soma = 0;
//   soma = soma + pilha2->elementos[pilha2->topo].valor;
//   return soma;
// }

void empilhar_p2(Pilha *pilha1, Pilha *pilha2, int chegada, Pilha *p[], int *Dc1, int *resposta){
int proxima_saida, Dc;
  
  do{
    pilha2->topo = pilha2->topo + 1;
    pilha2->vezesEmpilhado = pilha2->vezesEmpilhado + 1;
    pilha2->elementos[pilha2->topo] = pilha1->elementos[pilha1->topo];
    pilha1->topo = pilha1->topo - 1;

    if(pilha2->elementos[pilha2->topo].coluna == chegada){
      return;
    } else {
      proxima_saida = pilha2->elementos[pilha2->topo].coluna;
      empilhar_p1(pilha1, proxima_saida, p, Dc1, chegada);
      if(*Dc1 == 0){
        da_errado (pilha1, pilha2, &Dc);
      }
    }
  } while(pilha1->topo != -1);
  *resposta = -1;
}

//função para calcular a rota que nos retornará a soma com o custo do percurso
int calcular_rota (int saida, int chegada, Pilha *p[], int vertices){
  int i = saida-1, soma=0, Dc1, Dc2, resposta;
  Pilha *pilha1, *pilha2;

  pilha1 = criar(&Dc1);
  pilha2 = criar(&Dc2);

  empilhar_p1(pilha1, i, p, &Dc1, chegada);
  empilhar_p2(pilha1, pilha2, chegada-1, p, &Dc1, &resposta);

  // printf("Conteúdo da pilha 1:\n");
  // while(pilha1->topo >= 0){
  //   printf ("%d %d %d \n", pilha1->elementos[pilha1->topo].linha+1, pilha1->elementos[pilha1->topo].coluna+1, pilha1->elementos[pilha1->topo].valor);
  //   pilha1->topo = pilha1->topo - 1;
  // }

  //esse print serve para demonstrar quais "percursos" para obter a resposta (caminho)
  printf("Conteúdo da pilha 2:\n");
  while(pilha2->topo >= 0){
    printf ("%d %d %d %d\n", pilha2->elementos[pilha2->topo].linha+1, pilha2->elementos[pilha2->topo].coluna+1, pilha2->elementos[pilha2->topo].valor);
    pilha2->topo = pilha2->topo - 1, pilha2->elementos[pilha2->vezesEmpilhado];

  }
  //

  //desempilhando para somar os valores
  if (resposta != -1){
    while(pilha2->topo >= 0){
      soma = soma + pilha2->elementos[pilha2->topo].valor;
      pilha2->topo = pilha2->topo - 1;
    }
  }else{
    soma = -1;
  }
  return soma;
}

//liberando a memória que fora alocada anteriormente
void destruir(Pilha *P) {if (P != NULL) free(P); }

int main(void) {
  int vertices, arestas, DeuCerto, saida, chegada, percurso;
  //lendo a quantidade de vertices e de arestas para criação da matriz
  scanf("%d", &vertices);
  scanf("%d", &arestas);


  Pilha *p[vertices];
  int matriz[vertices][vertices];

  //criando a matriz
  definir (vertices, matriz, arestas);

  //criando o nosso vetor de pilhas
  vetor_pilhas (p, vertices, &DeuCerto);

  empilhar(p, vertices, matriz, &DeuCerto);

  //lendo o trajeto que queremos percorrer
  scanf("%d %d", &saida, &chegada);

  percurso = calcular_rota(saida, chegada, p, vertices);

  printf("%d\n", percurso);
  
  return 0;
}

// definir ok
// vetor pilhas ok
//empilhar ok