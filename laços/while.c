#include <stdio.h>
#include <stdlib.h>

int main () {
    int i;
    int i2 = 10;
    int i3 = 0;
    int i4 = 0;
    int a,b;
    

    while (i <= 10){
        printf("%d \n", i);

        i = i + 1;
    }

//////////////////////////////
    

    while (i2 > -1){
        printf("%d \n", i2);

        i2 = i2 - 1;
    }

//////////////////////////////

    while (i3 != 10){
        printf("Digite 10:");
        scanf("%d", &i3);
    }

    printf("FIM!\n");

 ////////////////////////////

    while (i4 <= 10){
        printf("Digite uma valor superior a 10:");
        scanf("%d", &i4);
    }

    printf("FIM!\n");

    ////////////////////////////////////////////////

   
    


    return 0;
    system("pause");

}