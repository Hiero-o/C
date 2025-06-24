#include <stdio.h>
#include <stdlib.h>


int main () {
    int i, a, m;


    printf("Digite um numero para ser o multiplciador da tabuada:\n");

    scanf("%d", &a);

    for(i = 0; i <= 10; i++){
        m = i * a;
        printf("\n %d x %d = %d", a, i, m);
    }

    return 0;
}