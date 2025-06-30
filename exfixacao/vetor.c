#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
/////////////////////////////////////////////////////////

float m;
int i = 0;
int vu;

printf("Qual será o tamanho do vetor???\n");
scanf("%d", &vu);

float VetorMedia[vu];

    for (i = 0; i < vu; i++){
        printf("Escolha um valor:\n");
        scanf("%f", &VetorMedia[i]);
        m += VetorMedia[i];
    }

    m = m / vu;

    for(i = 0; i < vu; i++){
        printf("\nVetor[%d] = %.3f",i, VetorMedia[i]);
    }

    printf("\nA media dos valores foi: %.3f", m);

    

////////////////////////////////////////////////////////////





    return 0;
}

