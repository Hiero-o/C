#include <stdio.h>
#include <stdlib.h> 

#define Linha 2
#define Coluna 3

int main() {
    

    int matriz [Linha] [Coluna] = {{1,2,3}, {4,5,6}};

    int i, j;


    for(i = 0; i <3; i++){

        for(j =0; j<3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    



return 0;



}