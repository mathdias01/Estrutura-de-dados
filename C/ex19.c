#include <stdio.h>

// Escreva um programa que leia uma matriz 2x2 e mostre seus elementos

int main(){
    int matriz[2][2];
    int l, c;

    for (l = 0; l < 2; l++){
        for(c = 0; c < 2; c++){
            printf("digite o valor para o elemento [%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
    for(l=0; l< 2; l++){
        for(c = 0; c<2; c++){
            printf("%d\t", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}