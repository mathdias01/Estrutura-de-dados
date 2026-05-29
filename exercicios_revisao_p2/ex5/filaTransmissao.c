#include "pacote.h"
#include "filaTransmissao.h"


Fila* iniciarFila(int capacidade){
    Fila* f = (Fila*)malloc(sizeof(Fila));
    if (f == NULL){
        printf("Erro: Falha ao alocar a estrutura da Fila!\n");
        exit(1);
    }
    f->frente = 0;
    f->tras = -1;
    f->capacidade = capacidade;
    f->pacote = (Pacote*)malloc(capacidade*sizeof(Pacote));
    if (f->pacote == NULL){
        printf("Erro: Falha ao alocar o vetor de pacotes da Fila!\n");
        free(f);
        exit(1);
    }
    
    return f;
}


int estaVaziaFila(Fila* f){
    return f->frente > f->tras;
}


int estaCheiaFila(Fila* f){
    return f->tras == f->capacidade - 1;
}


Fila* enfileirar(Fila* f, Pacote pacote){
    if (estaCheiaFila(f)){
        printf("Erro: Fila cheia!\n");
        return f;
    }
    f->tras++;
    f->pacote[f->tras] = pacote;
    return f;
}   

Pacote Transmitir(Fila* f, int *sucesso){
    Pacote vazio = {0, 0, 0.0};
    
    if (estaVaziaFila(f)){
        printf("Erro: Fila vazia!\n");
        *sucesso = 0; 
        return vazio;
    }
    Pacote pacoteEnviado = f->pacote[f->frente];

    f->frente++;
    *sucesso = 1; 
    return pacoteEnviado; 
}

void mostrarFila(Fila* f){
    if (estaVaziaFila(f)){
        printf("Erro: Fila vazia!\n");
        return;
    }   
    printf("Fila: ");
    for (int i = f->frente; i <= f->tras; i++){
        printf("Pacote %d - %d ",  f->pacote[i].numeroPacote, f->pacote[i].tamanho);
    }
    printf("\n");
}



// Pergunta:
// Qual pacote será transmitido primeiro?
//O que estiver na posicao frente, que no caso
// é o  Pacote 1 -> 500kb