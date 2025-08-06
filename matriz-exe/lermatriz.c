#include <stdio.h>
#include <stdlib.h>
#define coluna 3
#define linha 3


int main () {

    int matriz[linha] [coluna];

    int a,b;

    for(a = 0; a < linha; a++){

        for(b = 0; b < coluna; b++){
            printf("digite um numero: ");
            scanf("%d", &matriz[a][b]);
            
        }

        printf("\n");
    }

    for(a = 0; a < linha; a++){

        for(b = 0; b < coluna; b++){
            printf("%d ", matriz[a][b]);
            
        }
        printf("\n");
    }
    return 0;
}






