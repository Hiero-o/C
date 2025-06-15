#include <stdio.h>
#include <stdlib.h>


int main () {

    int a;


    printf("Digite um numero inteiro\n");
    scanf("%d",&a);

    if (a > 0 && a <10){
        printf("\nSeu numero esta entre 0 e 10!");
    } else {
        printf ("\nSeu numero nao esta entre 0 e 10...");
    }

    return 0;
}