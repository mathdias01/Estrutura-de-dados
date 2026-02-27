#include <stdio.h>
#include <locale.h>

//Desenvolva um programa que utilize uma função para calcular o quadrado de um
//numero

int quadrado(int n){
    n = n*n;
    return n;
}


int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o numero para ver o quadrado: ");
    scanf("%d", &num);
    printf("O quadrado do numero é %d", quadrado(num));

}
