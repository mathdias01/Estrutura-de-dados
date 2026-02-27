#include <stdio.h>
#include <locale.h>
//Crie um programa que leia um vetor de 5 números e calcule a média.
int main (){
    setlocale(LC_ALL, "Portuguese");
    int i;
    float meuVetor [5];
    float media; 
    for (i = 0; i < 5; i++){
        printf("Insira os 5 numeros para calcular a media deles: ");
        scanf("%f", &meuVetor[i]);
    }
    media = (meuVetor[0] + meuVetor[1] + meuVetor[2] + meuVetor[3] + meuVetor[4])/5;
    printf("A media dos numeros: %2f", media);
    return 0;

}