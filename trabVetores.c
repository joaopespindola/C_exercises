#include <stdio.h>
#include <stdlib.h>

#define MAX 50

// a struct caminho armazena basicamente a "referência" do ponto, ou seja, onde ele está localizado na matriz e o seu valor total.
typedef struct{
  int linha, coluna, valor;
} caminho;

// a struct elementos contém um vetor para fazer o armazenamento da pilha e uma variável que indica qual o topo da pilha. Dessa forma, é possível armazenar os caminhos dentro do vetor e fazê-lo funcionar como uma pilha.
typedef struct{
  caminho elem[MAX];
  int topo;
} elementos;

// a função criar, como o próprio nome já diz, vai criar um ponteiro para a pilha. Sendo  assim, a partir desse ponteiro é possível inserir ou remover os elementos da pilha. Em caso de sucesso, inicializa o topo com o valor de -1.
elementos* criar(int *deucerto){
  elementos* elem = (elementos*) malloc(sizeof(elementos));

  if (elem != NULL) {
    *deucerto = 1;
    elem->topo = -1;
  } else {
    *deucerto = 0;
  }
  return elem;
}

// a função vazia, veririfica se a pilha está vazia ou não. Em caso de sucesso retorna 1, caso contrário retorna 0.
int vazia(elementos* elem){
  if (elem->topo == -1) return 1;
  else return 0;
}

// a função cheia, veririfica se a pilha está cheia ou não. Em caso de sucesso retorna 1, caso contrário retorna 0.
int cheia(elementos* elem) {
  if(elem->topo == (MAX-1)) return 1;
  else return 0;
}

// a função liberar, vai executar um "free" sobre a pilha liberando o espaço de memória alocado.
void liberar(elementos* elem){
  if (elem != NULL) free(elem);
}

// a função desempilhar vai receber como parâmetro a pilha e como referência uma variável do tipo caminho, que foi aquela estrutura definida mais acima no código. Ao desempilhar o elemento, a variável passada por referência vai armazenar os dados do elemento removido e em seguida será decrementado uma unidade do topo.
int desempilhar(elementos *elem, caminho *c){
  if (vazia(elem) == 1) {
    return 0;
  } else {
    *c = elem->elem[elem->topo];
    elem->topo -= 1;
    return 1;
  }
}

// a função calcular_rota recebe como parâmetro a pilha, o valor de saída digitado pelo usuário, o valor de chegada também digitado pelo usuário, o tamanho da matriz especificado pelo usuário e a matriz.
int calcular_rota(elementos* elem, int saida, int chegada, int indice, int matriz[indice][indice]){

  int coluna, proxima_saida = saida, soma = 0, auxiliar = 0;
  caminho caminhos, possibilidades;

// ao entrar nessa estrutura de repetição (do-while) o algoritmo vai buscar quais são os vizinhos do valor que está na saída. Ou seja, como já sabemos de onde vamos sair, agora nós vamos buscar para onde eu consigo ir a partir do valor especificado como "ponto de partida" pelo usuário.
  do {
    for(coluna = 0; coluna < indice; coluna++){
// ao encontrar um vizinho, as informações dele são armazenadas na pilha.
      if(matriz[proxima_saida][coluna] != 0){
        elem->topo += 1;
        elem->elem[elem->topo].linha = proxima_saida;
        elem->elem[elem->topo].coluna = coluna;
        elem->elem[elem->topo].valor = matriz[proxima_saida][coluna];

// caso esse seja o destino, o elemento é desempilhado e o seu valor é incrementado a variável "soma".
        if (coluna == chegada){
          if (desempilhar(elem, &caminhos) == 1){
            soma += caminhos.valor;
          }
          return soma;
        }
// "auxiliar" é uma variável de controle para ajudar em casos em que o "ponto de partida" não se conecta em nada.
        auxiliar++;
      }
    }

// caso o elemento não tenha vizinhos, ou seja, caso o "ponto de partida" não se conecta em nada um elemento é desempilhado de acordo com a ordem e o seu valor é atribuido à variável "soma".
    if ((auxiliar == 0) && vazia(elem) != 1){
      possibilidades = caminhos;
      if (desempilhar(elem, &caminhos) == 1 && caminhos.linha == possibilidades.linha){
// caso aquele caminho proposto não me leve até o destino, basta decrementar o valor desse destino na variável "soma" e incrementar o valor do próximo caminho a ser verificado.
        soma -= possibilidades.valor;
        soma += caminhos.valor;
        proxima_saida = caminhos.coluna;
      } else {
        soma = caminhos.valor;
        proxima_saida = caminhos.coluna;
      }
    } else if (desempilhar(elem, &caminhos) == 1){
// agora caso o elemento tenha algum vizinho, ele passou pelo menos uma vez pelo "for" acima, logo a variável "auxiliar" vai ser diferente de zero. Caso isso ocorra, o último elemento inserido na pilha é desempilhado, o seu valor é incrementado à variável soma e a variável "próxima_saida", que armazena o "novo" ponto de partida, recebe o valor da coluna do elemento. Além disso "auxiliar" é zerado e todo o ciclo se repete.
      soma += caminhos.valor;
      proxima_saida = caminhos.coluna;
      auxiliar = 0;
      } else {
        return -1;
      // caso todos os caminhos tenham sido verificados e não foi encontrado uma rota, é retornado -1.
      }
  } while (1);
}

int main(){

  int vertices, arestas, contador, coluna = 0, linha = 0, auxiliar, ok, total;
  elementos *elem;

// faço a leitura da quantidade de vértices, ou seja, do tamanho da matriz.
  scanf ("%d", &vertices);
  setbuf(stdin,NULL);
// faço a leitura da quantidade de arestas, ou seja, da quantidade de ligações entre os pontos.
  scanf ("%d", &arestas);
  setbuf(stdin,NULL);
  
// criação da matriz de acordo com a quantidade especificada anteriormente pelo usuário.
  int matriz[vertices][vertices];

// colocando zero em todas as posições da matriz
  for (linha = 0; linha < vertices; linha++){
    for (coluna = 0; coluna < vertices; coluna++){
      matriz[linha][coluna] = 0;
    }
  }

// lendo os pontos que estão conectados e os seus respectivos valores.
// linha e coluna estão sendo decrementadas para se adequar aos "padrões" de C, sem interferir na matriz.
  for (contador = 0; contador < arestas; contador++){
    setbuf(stdin,NULL);
    scanf("%d %d %d", &linha, &coluna, &auxiliar);
    matriz[linha-1][coluna-1] = auxiliar;
  }

// leitura dos pontos de saída e chegada, ou seja, de onde para onde o usuário quer chegar.
  scanf("%d %d", &linha, &coluna);

// criando a pilha.
  elem = criar(&ok);

// caso a criação seja concluída com sucesso, a função calcular_rota é chamada e assim o resultado aparece na tela.
  if (ok == 1) {
    total = calcular_rota(elem, linha-1, coluna-1, vertices, matriz);
    printf ("%d\n", total);
  }

// liberando a pilha.
  liberar(elem);

  return 0;
}