#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main () {

    int a = 50;

    

    printf("Imprimindo de 60 até 0, de 6 em 6.\n");


    while(a > 0){

        printf("\nTotal = %d", a);

        a -= 6;
    } if(a < 0){
        printf("\nTotal = 0.");
    }
}


