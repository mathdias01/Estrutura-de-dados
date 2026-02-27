#include <stdio.h>
//Faça um programa que leia os valores de uma matriz 2x2.
int main(){
    int matriz[2][2];
    int l, c;
    for(l = 0; l< 2; l++){
        for(c=0; c<2; c++){
            printf("Insira o elemento da posicao[%d][%d]", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
    printf("---Sua matriz---\n");
    for(l = 0; l< 2; l++){
        for(c=0; c<2; c++){
            printf("%d\t",matriz[l][c]);
        }
        printf("\n");
    }

}