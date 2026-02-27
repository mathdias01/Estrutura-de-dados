#include <stdio.h>
//Faça um programa que conte quantos números pares existem em um vetor.

int par(int vetor[4]){
    int i;
    int pares = 0;  
    for(i = 0; i < 4; i++){
        if(vetor[i]% 2 == 0){
            pares += 1;
        }
    }
    return pares;
}

int main(){
    int vetor[4] = {1, 2, 4, 3};
    printf("---Vetor---\n");
    printf("[%d, %d, %d, %d]\n", vetor[0], vetor[1], vetor[2], vetor[3]);
    printf("Quantidade de pares: %d", par(vetor));

    return 0;
}