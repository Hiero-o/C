#include <stdio.h>
#include <stdlib.h>
#define TAM 2



int main() {

    int VetorDeInt [] = {1,2,3,4};
    float VetorDeFloat [3] = {1.5,1.3,1.7};
    char VetorDeChar [TAM] = {'a','b'};

    //modificando valor por atribuição:

    VetorDeInt[0] = 9;
 
    //Modificando valor com variável:

    float novoValor = 5.0;
    VetorDeFloat [2] = novoValor;

    //modificando valor com usuário:

    printf("Digite uma letra nova:");
    fflush(stdin);
    scanf("%c", &VetorDeChar[0]);

    //Imprimindo Vetores:

    int i = 0;
    printf("\n Vetor 1 = \n");
    for (i = 0; i < 4; i++){
        printf("%d \n", VetorDeInt[i]);
    }
    ///////////////////////////////////////
    printf("\n Vetor 2 = \n");

    for (i = 0; i < 3; i++) {
        printf("%f \n", VetorDeFloat[i]);
    }

    ///////////////////////////////////////

    printf("\n Vetor 3 = \n");

    for (i = 0; i < TAM; i++) {
        printf("%c \n", VetorDeChar[i]);
    }

    ////////////////////////////////////////

    //Lendo Valores para todo o vetor e escrevendo ele na tela:

    printf("\n Digite Inteiros \n");
    for (i = 0; i < 4; i++){
        printf("\n lendo em vetor [%d]", i);
        scanf("%d", &VetorDeInt[i]);
    }

    //////////////////////////////////////////

    // Imprimindo este valor atualizado:

    for(i = 0; i < 4; i++){
        printf("%d \n", VetorDeInt[i]);
    }


    return 0;
}