#include "listaPacotes.h"


ListaAtivos* iniciarLista(){
    ListaAtivos *l = (ListaAtivos*)malloc(sizeof(ListaAtivos));
    if (l == NULL){
        printf("[ERRO] Falha de memoria ao iniciar lista de pacotes!\n");
        exit(1);
    }

    l->inicio = NULL;
    return l;
}


void inserirInicio(ListaAtivos* l, PacoteAtivo pacote){
    NoLista *novoNo = (NoLista*)malloc(sizeof(NoLista));
    if (novoNo == NULL){
        printf("[ERRO] Falha de memoria ao alocar novo no da lista!\n");
        return;
    }

    novoNo->dado = pacote;
    novoNo->proximo = l->inicio;
    l->inicio = novoNo;
}

void inserirFinal(ListaAtivos* l, PacoteAtivo pacote){
    NoLista *novoNo = (NoLista*)malloc(sizeof(NoLista));
        if(novoNo == NULL){
        printf("[ERRO] Falha de memoria ao alocar novo no da lista!\n");
        return;
    }
    novoNo->dado = pacote;
    novoNo->proximo = NULL;

    if(l->inicio == NULL){
        l->inicio = novoNo;
        return;
    }
    NoLista *atual = l->inicio;
    while(atual->proximo != NULL){
        atual = atual->proximo;
    }
    atual->proximo = novoNo;
}


void mostrarLista(const ListaAtivos* l) {
    NoLista* atual = l->inicio;

    if (l->inicio == NULL) {
        printf("\n--- LISTA DE PACOTES ATIVOS NA REDE ---\n");
        printf("Nenhum pacote ativo circulando no momento.\n");
        printf("----------------------------------------\n");
        return;
    }

    printf("\n--- LISTA DE PACOTES ATIVOS NA REDE ---\n");
    
    while (atual != NULL) {
        printf("[ID: %d | Origem: %s | Destino: %s | Status: %s]\n",
               atual->dado.ID, 
               atual->dado.origem, 
               atual->dado.destino, 
               atual->dado.status);
        atual = atual->proximo;
    }
    printf("----------------------------------------\n");
}