#include <stdio.h>
//Desenvolva um programa que calcule a soma dos elementos de uma matriz.

int main(){
    int matriz[2][2] = {
        {1,2},
        {2,3}
    };
    int soma = 0;
    int l, c;
    printf("---Matriz---\n");
    for(l= 0; l< 2; l++){
        for(c = 0; c<2; c++){
           printf("%d\t", matriz[l][c]);
        }
        printf("\n");
    }
    for(l= 0; l< 2; l++){
        for(c = 0; c<2; c++){
            soma += matriz[l][c];
        }
    }
    printf("A soma dos elementos desta matriz e: %d", soma);
    return 0;
}