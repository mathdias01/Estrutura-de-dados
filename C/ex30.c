#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
    char emprego[50];
};

int main (){
    struct pessoa p1;

    printf("Insira seu nome:");
    fgets(p1.nome, 50, stdin);


    printf("Insira sua idade: ");
    scanf("%d", &p1.idade);

    getchar();

    printf("Insira o seu emprego: ");
    fgets(p1.emprego, 50, stdin);

    printf("\n--- Linkedin ---\n");
    printf("Nome: %s", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Emprego: %s", p1.emprego);

    return 0;
}


