#include <stdio.h>
#include <stdlib.h>
#define LINHA 2
#define COLUNA 2



int main () {

    printf("Escreva %d numeros e em seguida, ele vai te mostrar a ordem invertida \n", LINHA * COLUNA);


    int matriz [LINHA] [COLUNA];

    


    int a,b;
    int c,d =0;
    for (a = 0; a < LINHA; a++){

        for (b = 0; b < COLUNA; b++){
            printf("Digite um valor para Matriz [%d], [%d] \n", a,b);
            scanf("%d", &matriz[a][b]);
            
    
        }
        printf("\n");

    }

    for (a = LINHA - 1; a >= 0; a--){

        for(b = COLUNA - 1; b >= 0; b--){
            printf("%d ", matriz[a][b]);
        }
        printf("\n");
        
    }


    /* OU
    
        usando matrizes auxiliares.
        aux1, aux2

        int aux1, aux2;

        aux1 = matriz [0] [0]
        aux2 = matriz [0] [1]

        matriz [0][0] = matriz [1][0];
        matriz [0][1] = matriz [1][1];
        matriz [0][0] = aux1;
        matriz [0][1] = aux2;
    
    */

        return 0;
}



