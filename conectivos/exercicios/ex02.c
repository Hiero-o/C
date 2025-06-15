#include <stdio.h>
#include <stdlib.h>


int main () {
    int a,b,c;

    printf ("Escolha tres numeros:\n");
    scanf("%d %d %d",&a, &b, &c);

    if (a > 10 && b > 10 && c > 10){
        printf("\nUm ou mais numeros escolhidos sao maiores que 10");

    } else {
        printf("\nErro, algum ou nenhum numero escrito eh maior que 10.");
    }

    return 0;
}