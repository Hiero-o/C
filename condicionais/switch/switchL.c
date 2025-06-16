#include <stdio.h>
#include <stdlib.h>


int main () {
    char op;

    printf("MENU\n");
    printf("a - Espresso \n");
    printf("b - Cappucino \n");
    printf("c - Macchiato \n");
    printf("Escolha uma opcao: \n");

    
    scanf("%c",&op);

    switch(op) {
        case 'a':
            printf("Espresso Escolhido.");
        break;

        case 'b':
            printf("Cappuccino escolhido.");
        break;

        case 'c':
            printf("Macchiato escolhido.");
        break;

        default: 
              printf("Opcao invalida!");
        break;
    }


    return 0;
}