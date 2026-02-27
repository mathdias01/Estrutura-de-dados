#include <stdio.h>
//Crie um programa que leia 5 números inteiros e mostre a soma deles.
int main(){
    int i, num;
    int soma = 0;
    for(i = 1; i<= 5; i++){
        printf("Insira um valor: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("A soma dos 5 numeros inteiros lidos é %d", soma);
    return 0;
}