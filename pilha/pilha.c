#include <stdio.h>

#define MAX_SIZE 5


int topo = -1;
int pilha[MAX_SIZE];


int estaCheia(){
    return topo == MAX_SIZE - 1;
}

int estaVazia(){
    return topo == -1; 
}

void empilhar(int valor){
    if (estaCheia()){
        printf("Ja esta cheia\n");
        return;
    }

    topo++;
    pilha[topo] = valor;
    printf("O valor: %d, foi inserido com sucesso no topo da pilha!\n", valor);
}

int desempilhar(){
    if (estaVazia()){
        printf("Pilha vazia, impossivel desempilhar!\n");
        return -1;
    }   

    int valorRemovido = pilha[topo];
    printf("Elemento: %d na posicao %d, foi desempilhado!\n", valorRemovido, topo);
    topo --;
    
    return valorRemovido;
}


int main(){
    empilhar(10);
    empilhar(20);
    empilhar(30);
    empilhar(40);

    desempilhar();

    return 0;
}