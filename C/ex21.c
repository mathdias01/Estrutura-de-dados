#include <stdio.h>
//Declare um vetor de 5 inteiros e atribua valores manualmente


int main(){
    int vetor[5] = {10, 2, 3, 4, 5};
    int i;
    for (i= 0; i<5; i++){
        printf("Posicao %d: %d\n", i, vetor[i]);
        
    }


    return 0;
}