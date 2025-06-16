#include <stdio.h>
#include <stdlib.h>


int main () {
    int op;

    printf("MENU\n");
    printf("1 - Espresso \n");
    printf("2 - Cappucino \n");
    printf("3 - Macchiato \n");
    printf("Escolha uma opcao: \n");

    
    scanf("%d",&op);

    switch(op) {
        case 1:
            printf("Espresso Escolhido.");
        break;

        case 2:
            printf("Cappuccino escolhido.");
        break;

        case 3:
            printf("Macchiato escolhido.");
        break;

        default: 
              printf("Opcao invalida!");
        break;
    }


    return 0;
}