#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int topo;
    int *itens;
    int capacidade;
}Pilha;


Pilha* criarPilha(int capacidade){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    p->capacidade = capacidade; 
    p-> topo = -1;

    p->itens = (int*) malloc(capacidade * sizeof(int));

    return p;

};


int estaCheia(Pilha *p){
    return p->topo == p->capacidade -1;
}


int estaVazia(Pilha *p){
    return p->topo == -1;
}

int empilhar(Pilha *p, int valor){
    if (estaCheia(p)){
        printf("Pilha cheia!\n");
        return -1;
    }
    p->topo++;
    p->itens[p->topo] = valor; 
    int valorEmpilhado = p->itens[p->topo];
    printf("Valor empilhado: %d | Na posicao: %d\n", valorEmpilhado, p->topo);
    
    return valorEmpilhado;
}


int desempilhar(Pilha *p){
    if (estaVazia(p)){
        printf("Pilha vazia!");
        return -1;
    }

    int valorDesempilhado = p->itens[p->topo];
    printf("Valor desempilhado: %d | Posicao: %d\n", valorDesempilhado, p->topo);
    p->topo--;

    return valorDesempilhado;
}

void imprimirPilha(Pilha *p) {
    if (estaVazia(p)) {
        printf("A pilha esta vazia!\n");
        return;
    }
    printf("Exibindo a pilha (do topo para a base):\n");

    for (int i = p->topo; i >= 0; i--){
        printf("Elemento: %d | Posicao: %d\n", p->itens[i], i);
    }
    printf("--- Fim da Pilha ---\n");
}

void liberarMemoria(Pilha *p){
    free(p->itens);
    free(p); 
    printf("Memoria alocada liberada com sucesso!");
}


int main(){

    Pilha *minhaPilha = criarPilha(5);

    empilhar(minhaPilha, 10);
    empilhar(minhaPilha, 20);
    empilhar(minhaPilha, 30);
    empilhar(minhaPilha, 40);

    desempilhar(minhaPilha);

    imprimirPilha(minhaPilha);

    liberarMemoria(minhaPilha);

    return 0;
}

