#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int maximo = 6;
    int minimo = 1;

    srand(time(NULL));


    int r = rand() % (maximo - minimo +1) +minimo;
    int r1 = rand() % (maximo - minimo +1) +minimo;
    int r2 = rand() % (maximo - minimo +1) +minimo;

    int re = r + r1 + r2;

    printf("O resultado aleatorio eh %d  \n", re);



    int d1 = (rand() % 6) +1;
    int d2 = (rand() % 6) +1;
    int d3 = (rand() % 6) +1;

    int dt = d1 + d2 + d3;

    printf("\nA soma total dos numeros aleatorios eh de %d, no qual, %d %d %d foram os numeros aleatorios",dt, d1, d2, d3);

    return 0;


}