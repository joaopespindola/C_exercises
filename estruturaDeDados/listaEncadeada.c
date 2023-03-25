#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node node;
struct Node{
    char info;
    node *proximo;
};

typedef struct{
    node *topo;
}pilha;

node *newNode(bool *deuCerto){
    node *no;
    no = malloc(sizeof(node));
    if(no == NULL){
        *deuCerto = false; 
    }else{
        *deuCerto = true;
    }
    return no;
}

void delete(node *n){
    if(n != NULL){
        free(n);
    }
}

pilha *criarPilha(bool *deuCerto){
    pilha *Pi;
    Pi = malloc(sizeof(pilha));
    if(Pi == NULL){
        *deuCerto = false;
    }else{
        *deuCerto = true;
        Pi->topo = NULL; //condição de pilha vazia
    }
    return Pi;
}

bool pilhaCheia(pilha *Pi){
    //alocada dinamicamente, logo, dificilmente estará cheia
    return false;
}

void empilha(pilha *Pi, char x, bool *deuCerto){
    node *Auxiliar;
    bool joia;
    if(pilhaCheia(Pi) == true){
        *deuCerto == false;
    }else{
        Auxiliar = newNode(&joia);
        //o campo info recebe o caractere que queremos empilhas
        Auxiliar->info = x;
        //o novo node, apontando para o próximo, agora recebe o topo da nossa pilha
        Auxiliar->proximo = Pi->topo;
        //o topo da nossa pilha agora aponta para o node auxiliar
        Pi->topo = Auxiliar;
        *deuCerto = true;
    }
}

bool vazia(pilha *Pi){
    if(Pi->topo == NULL){
        return true;
    }else{
        return false;
    }
}

void desempilhar(pilha *Pi, char *x, bool *deuCerto){
    node *Auxiliar;
    if(vazia(Pi) == true){
        *deuCerto == false;
    }else{
        //node auxiliar recebe o topo da pilha como medida de "segurança"
        Auxiliar = Pi->topo; 
        //um ponteiro para o caractere recebe a info do node (que também é um char)
        *x = Auxiliar->info;
        //o topo da nossa pilha recebe agora o proximo do node auxiliar
        Pi->topo = Auxiliar->proximo;
        delete(Auxiliar);
        *deuCerto = true;
    }
}

    void destruir(pilha *Pi){
        //precisa inicializar a variavel pq vai passar como parametro pra outra funcaoo
        bool deuCerto;
        char x;
        while(vazia(Pi) != true){
            desempilhar(Pi, &x, &deuCerto);
        }
        free(Pi);
    }


void main(){
    pilha *Pi;
    node *no;
    char X;
    bool deuCerto, deuCerto2;
    no = newNode(&deuCerto2);
    Pi = criarPilha(&deuCerto);
    empilha(Pi, 'A', &deuCerto);
    empilha(Pi, 'B', &deuCerto);
    empilha(Pi, 'C', &deuCerto);
    empilha(Pi, 'D', &deuCerto);
    empilha(Pi, 'E', &deuCerto);
    while(vazia(Pi) != true){
        desempilhar(Pi, &X, &deuCerto);
        printf("%c ", no->proximo);
    }
    destruir (Pi);
}