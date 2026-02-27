#include <stdio.h>
int main(){
    int num;
    int i;
    printf("Insira o numero, para verificar os numeros de 1 ate ele: ");
    scanf("%d", &num);
    printf("contando...\n");
    for (i= 1; i <= num; i++){
        printf("%d\n", i);
    }


    return 0;
}