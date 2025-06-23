#include <stdio.h>
#include <stdlib.h>


int main () {
    int a,b;
    int i = 0;

    

    while( i == 0) {

        printf("Digite dois numeros entre 5 e 10 para somá-los:\n");

        scanf("%d %d", &a, &b);

    if (a >= 5 && a <=10 && b >= 5 && b <= 10){

        
        printf("\nA soma dos numeros eh: %d", a + b);

        i = 1;

    } else {
            
        printf("\nValores incorretos! Digite novamente");


    }

    }

    return 0;


}