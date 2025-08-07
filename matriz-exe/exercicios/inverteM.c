#include <stdio.h>
#include <stdlib.h>




int main () {

    printf("Escreva quatro numeros e em seguida, ele te mostrará a ordem invertida \n");


    int matriz [2] [2];

    int a,b;

    for (a = 0; a < 2; a++){

        for (b = 0; b < 2; b++){
            scanf("%d", &matriz[a][b]);

        }
        printf("\n");

    }

    for (a = 0; a < 2; a++){

        for(b = 0; b < 2; b++){
            printf("%d ", matriz[a][b]);
        }
        printf("\n");
        
    }


        return 0;

        

}



