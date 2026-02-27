#include <stdio.h>
//Faça um programa que leia um número e calcule seu fatorial (usando for).

int main(){
    int num, i;
    int fat = 1;
    printf("Insira um numero para verificar seu fatorial: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        fat = fat * i;
        
    }
    printf("O fatorial de %d é: %d", num, fat);
    return 0;
}