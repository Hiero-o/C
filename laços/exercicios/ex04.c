#include <stdio.h>
#include <stdlib.h>

int main(){

    int s;

    int i = 0;

    for(i = 0; i < 10; i +=1){

        s = s + i;

        printf("\ni = %d | soma = %d", i, s);
    }

    return 0;
}