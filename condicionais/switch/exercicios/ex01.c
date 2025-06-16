#include <stdio.h>
#include <stdlib.h>


int main () {
    int a,b, op;

    printf("Escolha dois numeros:\n");
    scanf("%d %d",&a, &b);

    printf("Voce quer somar ou subtrair?\n");
    printf("Digite 1 para somar\n");
    printf("Digite 2 para subtrair\n");

    scanf("%d",&op);

    switch(op){
        case 1:
            printf("\nA soma deles eh de: %d", a + b);
            break;

        case 2:
            printf("\nA subtracao deles eh de %d", a-b);
        break;
    }

    return 0;
}

