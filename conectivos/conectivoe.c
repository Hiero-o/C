#include <stdio.h>
#include <stdlib.h>


int main () {

    //conectivos

    int a,b;

    printf("Digite suas idades:\n");
    scanf("%d %d", &a, &b);

    if (a > 17 && b > 17) {
        printf("\nTudo certo");
    } else {
        printf("\nProblema!");
    }

    return 0;





}