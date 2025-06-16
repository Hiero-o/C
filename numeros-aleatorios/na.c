#include <stdio.h>
#include <stdlib.h>

//importante pra gerar esses numeros aleatorios
#include <time.h>

int main (){

    //Usa o tempo atual como semente (seed)
    srand(time(NULL));

    //Cria um número aleatório de 0 a 9
    int r = rand() % 10;

    //Imprime o número gerado
    printf("numero gerado: %d", r);


    return 0;
}