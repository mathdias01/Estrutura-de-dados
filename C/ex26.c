#include <stdio.h>
//Declare uma matriz 3x3 e inicialize todos os valores com zero

int main(){
    int matriz[3][3] = {0};
    int l, c;
    printf("---Matriz---\n");
    for(l = 0; l<3; l++){
        for (c =0; c< 3; c++){
            printf("[%d]", matriz[l][c]);
        }
        printf("\n");

    }
    return 0;

}