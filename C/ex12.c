#include <stdio.h>
#include <locale.h>
//Fa√ßa um programa que leia 5 n√∫meros e informe qual √© o maior

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, num;
    int maior = 0;
    for(i = 1; i<= 5; i++){
        printf("Insira um numero para verificar se È o maior: ");
        scanf("%d", &num);
        if(maior < num){
            maior = num;
        }else{
            maior = maior;
        }
        
    }

    printf("O maior numero È: %d", maior);

    return 0;
}