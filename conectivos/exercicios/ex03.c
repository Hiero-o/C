#include <stdio.h>
#include <stdlib.h>

int main () {

    int a,b;

    printf("Escolha dois numeros:\n");
    scanf("%d %d",&a, &b);

    if (a > 10 || b > 10){
        printf("Um ou mais numeros sao maiores que 10");
    } else {
        printf("nenhum eh maior que 10");

    }

    return 0;

}