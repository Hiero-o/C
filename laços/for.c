#include <stdio.h>
#include <stdlib.h>


int main () {
    int i, i2;


    for(i = 0; i <=10; i++) {
        printf("\n %d", i);

    }

    for(i2 = 100; i2 >= 0; i2 -= 10) {
        printf("\n %d", i2);
    }

    return 0;
}