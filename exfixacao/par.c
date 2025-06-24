#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    setlocale (LC_ALL,"");

    /////////////////////////////////////
    int i = 10;

    printf("\n //WHILE//");

    while(i <= 20){
        printf("\n %d",i);
        i += 2;
    }

    //////////////////////////////////////

    printf("\n//do while//");

    int i2 = 10;
    do {

       printf("\n %d", i2);
       
       i2 += 2;


    } while(i2 <= 20);

    ////////////////////////////////////////

    printf("\n//For//");

    int i3;

    for(i3 = 10; i3 <= 20; i3 +=2){
        printf("\n %d", i3);
    }

    return 0;



    // ou usar o resto da divisao , que fica melhor para numeros impares e masi fácil também! (i % 2 == 1)


}