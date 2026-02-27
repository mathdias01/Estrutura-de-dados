#include <stdio.h>
#include <string.h>
//Crie um programa que utilize uma struct para armazenar nome e idade de uma pessoa.


struct pessoa {
    char nome[50];
    int idade;
};

int main (){
    struct pessoa p1;

    printf("Digite o nome: ");
    fgets(p1.nome, 50, stdin);

    printf("Digite a idade: ");
    scanf("%d", &p1.idade);


    printf("\n--- Dados cadastrados ---\n");
    printf("Idade: %d\n", p1.idade);
    printf("Nome: %s\n", p1.nome);
    
    
    return 0;
}