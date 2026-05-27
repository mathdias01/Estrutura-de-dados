#include "pilhaErros.h"


Pilha* iniciarPilha(int capacidade){
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    if (p == NULL) {
        printf("Erro: Falha ao alocar a estrutura da Pilha!\n");
        exit(1);
    }
    p->topo = -1;
    p->capacidade = capacidade;

    p->pacotes = (Pacote*)malloc(capacidade*sizeof(Pacote));
    if (p->pacotes == NULL) {
        printf("Erro: Falha ao alocar o vetor de pacotes da Pilha!\n");
        free(p);
        exit(1);
    }
    return p;
}


int estaVaziaPilha(Pilha* p){
    return p->topo == -1;
}


int estaCheiaPilha(Pilha* p){
    return p->topo == p->capacidade - 1;
}


Pilha* empilhar(Pilha* p, Pacote pacote){
    if (estaCheiaPilha(p)){
        printf("Erro: Pilha cheia!\n");
        return p;
    }
    p->topo++;
    p->pacotes[p->topo] = pacote;
    return p;
}


Pacote desempilhar(Pilha* p){
    Pacote vazio = {0, 0, 0.0};
    if (estaVaziaPilha(p)){
        printf("Erro: Pilha vazia!\n");
        return vazio;
    }
    Pacote pacoteDesempilhado = p->pacotes[p->topo];
    p->topo--;
    return pacoteDesempilhado;

}