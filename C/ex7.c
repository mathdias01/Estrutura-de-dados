#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    printf("Insira seu nome: ");
    scanf("%s", nome);
    printf("Insira sua idade: ");
    scanf("%i", &idade);

    printf("Nome: %s\nIdade: %i\n", nome, idade);

    return 0;
}