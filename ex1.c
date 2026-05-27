#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar a Pilha
typedef struct {
    int topo;
    int capacidade;
    int *itens;
} Pilha;

// Função para verificar se a pilha está vazia
int estaVazia(Pilha *p) {
    return p->topo == -1;
}

// Função para verificar se a pilha está cheia
int estaCheia(Pilha *p) {
    return p->topo == p->capacidade - 1;
}

// Função para inserir (Push)
void empilhar(Pilha *p, int valor) {
    if (estaCheia(p)) {
        printf("\nErro: A pilha esta cheia!\n");
    } else {
        p->topo++;
        p->itens[p->topo] = valor;
    }
}

// Função para remover (Pop)
int desempilhar(Pilha *p) {
    if (estaVazia(p)) {
        printf("\nErro: A pilha esta vazia!\n");
        return -1;
    } else {
        int valorRemovido = p->itens[p->topo];
        p->topo--;
        return valorRemovido;
    }
}

// Função para mostrar os elementos
void imprimirPilha(Pilha *p) {
    if (estaVazia(p)) {
        printf("Pilha vazia.");
    } else {
        for (int i = 0; i <= p->topo; i++) {
            printf("%d ", p->itens[i]);
        }
    }
    printf("\n");
}

int main() {
    int tam, valor;
    Pilha minhaPilha;

    // 1. Definir tamanho máximo
    printf("Digite o tamanho maximo da pilha: ");
    scanf("%d", &tam);

    minhaPilha.capacidade = tam;
    minhaPilha.topo = -1;
    minhaPilha.itens = (int *)malloc(tam * sizeof(int));

    // 2. Inserir n-1 elementos
    printf("Inserindo %d elementos (n-1):\n", tam - 1);
    for (int i = 0; i < tam - 1; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &valor);
        empilhar(&minhaPilha, valor);
    }

    // 3. Informar estado e elementos
    printf("\n--- STATUS ATUAL ---");
    printf("\nElementos na pilha: ");
    imprimirPilha(&minhaPilha);
    printf("Pilha esta vazia? %s", estaVazia(&minhaPilha) ? "Sim" : "Nao");
    printf("\nPilha esta cheia? %s", estaCheia(&minhaPilha) ? "Sim" : "Nao");

    // 4. Incluir um elemento qualquer (para encher a pilha)
    printf("\n\nIncluindo mais um elemento (valor 99)...");
    empilhar(&minhaPilha, 99);
    printf("\nNova sequencia: ");
    imprimirPilha(&minhaPilha);
    printf("Pilha esta cheia agora? %s", estaCheia(&minhaPilha) ? "Sim" : "Nao");

    // 5. Remover um elemento
    printf("\n\nRemovendo o elemento do topo (%d)...", desempilhar(&minhaPilha));
    printf("\nNova sequencia final: ");
    imprimirPilha(&minhaPilha);

    // Liberar memoria
    free(minhaPilha.itens);
    return 0;
}