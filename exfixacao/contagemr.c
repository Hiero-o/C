#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

int main () {
    setlocale(LC_ALL,"");

//////////////////////////////////////////
    int i = 10;
    

    printf("\nComeçando com WHILE");


    while(i >=0){
        printf("\n %d", i);
        i -= 1;
    }


/////////////////////////////////////////
    printf("\nAgora com DO WHILE!");


    int i2 = 10;
    do {

        printf("\n%d", i2);
        i2 -= 1;

    } while (i2 >= 0);



//////////////////////////////////////////
    printf("\n Agora com FOR");


    int i3;

    for(i3 = 10; i3 >=0; i3--){
        printf("\n %d",i3);
    }


    return 0;
}

