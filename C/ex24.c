#include <stdio.h>

int maior (int vetor[5]){
    int i;
    int maiorV = vetor[0];
    for (i = 0; i< 5; i++){
        if(maiorV < vetor[i]){
            maiorV = vetor[i];
        }
    }
    return maiorV;

}

int main(){
    int vetor [5] = {1, 2, 3, 4,10};
    printf("O maior numero do vetor: [%d, %d, %d, %d, %d]\n",vetor[0], vetor[1], vetor[2], vetor[3], vetor[4] );
    printf("e o %d\n", maior(vetor));
    return 0;

}