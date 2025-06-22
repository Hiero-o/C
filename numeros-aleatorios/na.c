#include <stdio.h>
#include <stdlib.h>

//importante pra gerar esses numeros aleatorios
#include <time.h>

int main (){

    //Usa o tempo atual como semente (seed)
    srand(time(NULL));

    //Cria um número aleatório de 0 a 9
    int r = rand() % 10;

     //Cria um número aleatório de 5 a 14
    //int r = rand() % 10 + 5; 

    //Imprime o número gerado
    printf("numero gerado: %d", r);

//OBS: 
//Nao funciona no terminal integrado do vscode!
//Use o CMD ou outro disponível.
    return 0;


    //Usa o tempo atual como semente
    // srand(time(NULL));

    //cria um numeroi aleatorio de 5 a 14
    //int maximo = 14;
    //int minimo = 5;

    //Traduzindo para a fórmula
    //                      13   -    5   +1 =10
    // int r = (rand() % (maximo - minimo +1)) + minimo;
    //entao, teremos um numnero de 0 a 9 + 5
    //ou seja, o minimo sera 5 e o maximo 14.

}