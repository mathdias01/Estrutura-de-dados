#ifndef LISTA_PACOTES_H
#define LISTA_PACOTES_H

#include "pacote.h"


typedef struct NoLista {
    PacoteAtivo dado;
    struct NoLista* proximo; 
} NoLista;


typedef struct {
    NoLista* inicio;
} ListaAtivos;

#endif