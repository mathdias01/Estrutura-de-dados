#include <stdio.h>
#include <locale.h>
//Faça um programa que leia um número inteiro e calcule a soma dos números pares até
//ele

int somaPar(int n){
    int i;
    int somaPar = 0;
    for(i = 1; i < n; i++ ){
        if(i%2 == 0){
            somaPar += i;
        }
    }
    return somaPar;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n; 
    prntf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("A soma dos numeros pares até %d é %d", n , somaPar(n));
    return 0;

}