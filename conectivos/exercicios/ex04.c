#include <stdio.h>
#include <stdlib.h>

int main () {

    int a,b, r1, r2;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);

    

    if ((a % 2 == 0) || (b % 2 == 0)){

        printf("um ou mais numeros sao pares.");

    } else {
        printf("nenhum numero eh par.");
    }

    return 0;
        
}

