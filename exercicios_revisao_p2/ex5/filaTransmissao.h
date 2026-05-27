#ifndef FILA_TRANSMISSAO_H
#define FILA_TRANSMISSAO_H
#include <stdio.h>
#include <stdlib.h>
#include "pacote.h"


typedef struct{
    int frente;
    int tras;
    Pacote *pacote;
    int capacidade;
}Fila;

Fila* iniciarFila(int capacidade);
int estaVaziaFila(Fila* f);
int estaCheiaFila(Fila* f);
Fila* enfileirar(Fila* f, Pacote pacote);
Pacote Transmitir(Fila* f, int* sucesso);
void mostrarFila(Fila* f);


#endif