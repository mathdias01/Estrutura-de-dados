//Fia de Prioridade
#include <stdio.h>
#include <stdlib.h>
 
#define MAX 10
 
// Estrutura da fila de prioridade
typedef struct {
    int valor;
    int prioridade;
} Elemento;
 
Elemento fila[MAX];
int tamanho = 0;
 
// Verifica se a fila está vazia
int filaVazia() {
    return tamanho == 0;
}
 
// Verifica se a fila está cheia
int filaCheia() {
    return tamanho == MAX;
}
 
// Inserir elemento na fila
//valor 10 prioridade 1
//valor 20 prioridade 10
void enqueue(int valor, int prioridade) {
    if (filaCheia()) {
        printf("Fila cheia!\n");
        return;
    }
 
    fila[tamanho].valor = valor;
    fila[tamanho].prioridade = prioridade;
    tamanho++;
 
    printf("Elemento %d inserido com prioridade %d\n", valor, prioridade);
}
 
// Remover elemento de maior prioridade
//fila [0] valor 10 prioridade 1
//fila[1] valor 20 prioridade 10
void dequeue() {
    if (filaVazia()) {
        printf("Fila vazia!\n");
        return;
    }
 
    int maiorPrioridade = 0;
 
    // Procura o índice do elemento com maior prioridade
    for (int i = 1; i < tamanho; i++) {
        if (fila[i].prioridade > fila[maiorPrioridade].prioridade) {
            maiorPrioridade = i;
        }
    }
 
    printf("Removido: %d (Prioridade: %d)\n",
           fila[maiorPrioridade].valor,
           fila[maiorPrioridade].prioridade);
 
    // Move os elementos para preencher o espaço removido
    for (int i = maiorPrioridade; i < tamanho - 1; i++) {
        fila[i] = fila[i + 1];
    }
 
    tamanho--;
}
 
// Exibir fila
void exibirFila() {
    if (filaVazia()) {
        printf("Fila vazia!\n");
        return;
    }
 
    printf("\nFila de Prioridade:\n");
 
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %d | Prioridade: %d\n",
               fila[i].valor,
               fila[i].prioridade);
    }
}
 
int main() {
 
    enqueue(10, 2);
    enqueue(20, 5);
    enqueue(30, 1);
    enqueue(40, 4);
 
    exibirFila();
 
    printf("\n");
 
    dequeue();
 
    printf("\n");
 
    exibirFila();
 
    return 0;
}
 
//Fila de de prioridade com ponteiro
#include <stdio.h>
#include <stdlib.h>
 
// Estrutura do nó da fila.  nó [valor/prioridade]->(prox)
typedef struct No {
    int valor;
    int prioridade;
    struct No *prox;
} No;
 
// Ponteiro para o início da fila
No *inicio = NULL;
 
// Verifica se a fila está vazia
int filaVazia() {
    return inicio == NULL;
}
 
// Inserir elemento na fila de prioridade
void enqueue(int valor, int prioridade) {
 
    // Aloca memória para o novo nó
    No *novo = (No *) malloc(sizeof(No));
 
    if (novo == NULL) {
        printf("Erro de memoria!\n");
        return;
    }
 
    //obs -> é um acesso
    novo->valor = valor;
    novo->prioridade = prioridade;
    novo->prox = NULL;
 
    // Caso a fila esteja vazia
    if (filaVazia()) {
        inicio = novo;
    }
    else {
 
        // Inserção no início se tiver maior prioridade
        if (prioridade > inicio->prioridade) {
            novo->prox = inicio;
            inicio = novo;
        }
        else {
 
            // Percorre a fila
            No *atual = inicio;
 
            while (atual->prox != NULL &&
                   atual->prox->prioridade >= prioridade) {
 
                atual = atual->prox;
            }
 
            // Insere o nó na posição correta
            novo->prox = atual->prox;
            atual->prox = novo;
        }
    }
 
    printf("Elemento %d inserido com prioridade %d\n",
           valor, prioridade);
}
 
// Remove elemento de maior prioridade
void dequeue() {
 
    if (filaVazia()) {
        printf("Fila vazia!\n");
        return;
    }
 
    No *temp = inicio;
 
    printf("Removido: %d | Prioridade: %d\n",
           temp->valor,
           temp->prioridade);
 
    inicio = inicio->prox;
 
    free(temp);
}
 
// Exibe a fila
void exibirFila() {
 
    if (filaVazia()) {
        printf("Fila vazia!\n");
        return;
    }
 
    No *atual = inicio;
 
    printf("\nFila de Prioridade:\n");
 
    while (atual != NULL) {
 
        printf("Valor: %d | Prioridade: %d\n",
               atual->valor,
               atual->prioridade);
 
        atual = atual->prox;
    }
}
 
// Programa principal
int main() {
 
    enqueue(10, 2);
    enqueue(20, 5);
    enqueue(30, 1);
    enqueue(40, 4);
 
    exibirFila();
 
    printf("\n");
 
    dequeue();
 
    printf("\n");
 
    exibirFila();
 
    return 0;
}
