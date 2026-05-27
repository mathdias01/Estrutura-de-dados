#include <stdio.h>
#include <stdlib.h> // Necessário para o malloc (alocação de endereço)

typedef struct {
    int *itens;      // PONTEIRO: Guarda o ENDEREÇO inicial do nosso vetor
    int frente;      // CONTEÚDO: Índice (número da casa) de quem sai
    int tras;        // CONTEÚDO: Índice (número da casa) de quem entra
    int capacidade;  // CONTEÚDO: Quantas casas alugamos no total
    int qtd;         // CONTEÚDO: Quantos moradores temos agora
} Fila;

// Função para criar a fila (Aluga o espaço na memória)
Fila* criarFila(int tam) {
    // 1. Alugamos um espaço para a "Pasta" da Fila (Endereço)
    Fila *f = (Fila *) malloc(sizeof(Fila));
    
    f->capacidade = tam;
    f->frente = 0;
    f->tras = -1;
    f->qtd = 0;
    
    // 2. Alugamos um quarteirão de casas para os itens (Vetor)
    // itens guarda o ENDEREÇO da primeira casa desse quarteirão
    f->itens = (int *) malloc(tam * sizeof(int));
    
    return f;
}

int estaCheia(Fila *f){
     return f->qtd == f->capacidade;
        
    }

int estaVazia(Fila *f){
    return f->qtd == 0;
}

void enfileirar(Fila *f, int valor) {
    if (estaCheia(f)) {
        printf("Fila Cheia!\n");
        return;
    }
    // Lógica Circular usando o resto da divisão (%)
    f->tras = (f->tras + 1) % f->capacidade;
    
    // Aqui acessamos o CONTEÚDO da casa apontada pelo endereço 'itens' no índice 'tras'
    f->itens[f->tras] = valor; //mesma coisa que, porem mais facil de entender. *(f->itens + f->tras) = valor;
    f->qtd++;
    printf("Enfileirado: %d no indice %d\n", valor, f->tras);
}

int desenfileirar(Fila *f) {
    if (estaVazia(f)) {
        printf("Fila Vazia!\n");
        return -1; // Retorna -1 como sinal de erro (conteúdo inválido)
    }
    int valor = f->itens[f->frente];
    f->frente = (f->frente + 1) % f->capacidade;
    f->qtd--;
    return valor;
}

int liberarMemoria(Fila *f){
    free(f->itens);
    free(f);
}

int main() {
    int n;
    printf("Digite o tamanho da fila: ");
    scanf("%d", &n);

    // 'minhaFila' guarda o ENDEREÇO de onde a fila foi criada
    Fila *minhaFila = criarFila(n);

    enfileirar(minhaFila, 10);
    enfileirar(minhaFila, 20);
    enfileirar(minhaFila, 30);

    printf("Desenfileirado: %d\n", desenfileirar(minhaFila));
    
    // Agora o tras pode "dar a volta" se enfileirarmos mais
    enfileirar(minhaFila, 40);

    liberarMemoria(minhaFila);
    return 0;
}