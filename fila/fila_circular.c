#include <stdio.h>

#define MAX_SIZE 5

int frente = 0;
int fila[MAX_SIZE];
int tras = -1;
int qtd = 0;

int estaCheia(){
    return qtd == MAX_SIZE;
}

int estaVazia(){
    return qtd == 0;
}

void enfileirar(int valor){
    if (estaCheia()){
        printf("A fila ja esta cheia!");
        return;
    }

    tras = (tras + 1) % MAX_SIZE;
    fila[tras] = valor;
    qtd++;

    printf("Inserido: %d | Tras agora esta em: %d | Qtd: %d\n", valor, tras, qtd);
}


int desenfileirar(){
    if (estaVazia()){
        printf("esta vazia!");
        return -1;
    }
    
    int valor = fila[frente];
    frente = (frente + 1) % MAX_SIZE;
    qtd --;
    
    printf("Removido: %d | Frente agora esta em: %d | Qtd: %d\n", valor, frente, qtd);
    return valor;
    
    
}


int main(){
    enfileirar(10);
    enfileirar(20);
    enfileirar(30);

    desenfileirar();
    
    enfileirar(40);
    return 0;
}

