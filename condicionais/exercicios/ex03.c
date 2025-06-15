#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;

    printf("Escreva um numero:");
    scanf("%d", &n);
    

    if (n % 2 == 0){
        printf("\nO numero %d eh par.",n);

    } else {
        printf("\nO numero %d eh impar",n);
    }

    return 0;
}