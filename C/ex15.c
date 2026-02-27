#include <stdio.h>
#include <locale.h>
//Faça um programa que leia um numero e utilize uma função para verificar se ele é par.

int verificarPar(int n){
    if (n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Insira o numero para verificar se ele é par ou ímpar: ");
    scanf("%d", &num);
    if (verificarPar(num) == 1){
        printf("O numero %d é par!", num);
    }
    else{
        printf("O numero %d é í­mpar", num);
    }
    return 0;
}