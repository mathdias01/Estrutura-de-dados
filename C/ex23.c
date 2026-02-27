#include <stdio.h>

//Desenvolva um programa que calcule a soma dos elementos de um vetor.

int main (){
    int vetor[5] = {1, 2, 3, 4, 5};
    int i;
    int soma = 0;

    printf("---Soma dos elementos de um vetor---\n");
    for(i = 0; i<5; i++){
        soma += vetor[i];
    }

    printf("A soma dos elementos do vetor [%d, %d, %d, %d, %d]\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
    printf("Soma: %d", soma);


    return 0;
}