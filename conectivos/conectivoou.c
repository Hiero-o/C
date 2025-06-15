#include <stdio.h>
#include <stdlib.h>

int main () {

    //conectivo OU

    int a, b, c;


    printf("Qual a classificacao do filme?\n");
    scanf("%d", &c);

    printf("Quais suas idades?\n");
    scanf("%d %d", &a, &b);

    if (c > a && b){
        printf("\nErro!");
    } else if ( c < a || b ) {
        printf("\nTudo certo!");
    } else {
        printf("\nTudo certo");
    }

    return 0;
}