#include <stdio.h>
#include <stdlib.h>

int main () {
    int a,b;

    printf("Escreva dois numeros:\n");
    scanf("%d %d",&a, &b);


    if ((a+b >0 && a+b < 10)){
        printf("\na soma entre eles esta entre 0 e 10.");
    } else if ((a+b) % 2 ==0){
        printf("\n A soma entre os numeros eh par");
    } else {
        printf("\nNao atende aos requisitos");

    }

    return 0;

    
}