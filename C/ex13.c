#include <stdio.h>
#include <locale.h>

//Escreva um programa que leia um vetor de 10 posições e mostre seus valores.

int main (){
    setlocale(LC_ALL, "Portuguese");
    int i;
    int meuVetor[10];
    for(i = 0; i < 10; i++){
        printf("Insira os numeros para formar a lista:");
        scanf("%d", &meuVetor[i]);
    }

    for(i = 0; i< 10; i++){
        printf("Valores: %d\n", meuVetor[i]);
    }


    return 0;
}