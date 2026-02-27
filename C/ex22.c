#include <stdio.h>
//Faça um programa que leia 5 números em um vetor e mostre-os na tela.

int main() {
    int vetor[5];
    int i;
    for(i = 0; i<5; i++){
        printf("Insira o numero para a posicao [%d]", i);
        scanf("%d", &vetor[i]);
    }
    printf("Vetores abaixo:\n");
    for(i = 0; i<5; i++){
        printf(" %d\t", vetor[i]);
    }


    return 0;
}