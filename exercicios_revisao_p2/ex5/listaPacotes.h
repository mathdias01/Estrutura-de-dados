#ifndef LISTA_PACOTES_H
#define LISTA_PACOTES_H
#include <stdio.h>
#include <stdlib.h>
#include "pacote.h"


typedef struct NoLista {
    PacoteAtivo dado;
    struct NoLista *proximo; 
} NoLista;


typedef struct {
    NoLista *inicio;
}ListaAtivos;


ListaAtivos* iniciarLista();
void inserirInicio(ListaAtivos *l, PacoteAtivo pacote);
void inserirFinal(ListaAtivos *l, PacoteAtivo pacote);
void mostrarLista(const ListaAtivos *l);
void removerLista(ListaAtivos *l, int id);




#endif