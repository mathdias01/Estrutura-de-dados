#ifndef PILHA_ERROS_H
#define PILHA_ERROS_H
#include <stdio.h>
#include <stdlib.h>
#include "pacote.h"

typedef struct{
    int topo;
    Pacote *pacotes;
    int capacidade;
}Pilha;

Pilha* iniciarPilha(int capacidade);
int estaVaziaPilha(Pilha* p);
int estaCheiaPilha(Pilha* p);
Pilha* empilhar(Pilha* p, Pacote pacote);
Pacote desempilhar(Pilha* p);

#endif