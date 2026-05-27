#include <stdio.h>

// soma recursiva
int g(int a[], int b){
    if(b<= 0){
        return 0;
    }
    return a[b-1]+ g(a, b-1);
}


int main() {
    int v[] = {10, 20, 30};
    int n = 3;

    int res = g(v, n);
    
    printf("Resultado: %d\n", res);
    return 0;
}