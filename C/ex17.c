#include <stdio.h>
#include <locale.h>
//Crie um programa que leia dois números e utilize uma função para retornar o maior
int maior(int n, int n2){
    if(n > n2){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, n2;
    printf("Insira o primeiro numero: ");
    scanf("%d", &n);
    printf("Insira o segundo numero: ");
    scanf("%d", &n2);
    
    if (maior(n, n2) == 0){
        printf("O numero %d é maior!", n);
    }
    else{
        printf("O numero %d é menor!", n2);
    }
    return 0;
}