#include <stdio.h>
#include <stdlib.h>

int main () {

    int a,b,c;
    int i = 0;


    printf("Digite um numero inicial, o numero final e de quanto será a contagem:\n");

    scanf("%d %d %d", &a,&b,&c);

    for (i = a; i <= b; i += c) {
        printf("\n %d", i);
    }

    return 0;
}