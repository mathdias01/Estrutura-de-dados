#include <stdio.h>
//Crie um programa que leia uma matriz 2x2 e calcule a soma de todos os valores

int main(){
    int matriz[2][2];
    int l, c;
    int soma = 0;

    for(l=0; l<2; l++){
        for(c=0;c<2;c++){
            printf("Insira os valores [%d][%d]",l, c);
            scanf("%d", &matriz[l][c]);
            soma += matriz[l][c];
        }
    }
    printf("A matriz\n");
    
    for(l=0; l< 2; l++){
        for(c = 0; c<2; c++){
            printf("%d\t" , matriz[l][c]);
        }
        printf("\n");
    }
    printf("tem a soma: %d", soma);

}