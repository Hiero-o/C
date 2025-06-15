#include <stdio.h>
#include <stdlib.h>


int main () {
    int n1, n2;


    printf("Digite dois numeros:");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2){
        printf("\nO numero %d eh maior",n1);
    } else if (n1 == n2) {
        printf("\nOs %d e %d sao numeros iguais",n1, n2);
    } else {
        printf("\nO numero %d eh maior",n2);
    } 

    system("pause");
    return 0;
}