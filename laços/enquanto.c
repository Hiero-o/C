#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {

    int a = 0;
    int b = 0;
    

     while (a <= 10 || b <= 10){
        printf("Digite uma valor superior a 10 para A:");
        scanf("%d", &a);
        printf("Digite outro valor para B");
        scanf("%d", &b);

    }

    printf("FIM!\n");





    ////////////////////////////

    //Para se executar apenas uma vez enquanto a condição for falsa. Quando necessário rodar pelo menos uma vez o código.
    int i = 10;

    do {

        printf("Vai ser executado ao menos uma vez\n");
        printf("Mesmo que a condicao seja falsa.\n");
    } while (i < 5);

    


    return 0;


}