#include <stdio.h>
#include <stdlib.h>


void main () {

    int a, b, r, ab;

    printf("escolha um numero:\n");
    scanf("%d", &a);

    printf("Escolha outro numero:\n");
    scanf("%d", &b);

    r = a - b;

    ab = abs(r);

    printf("\n A diferenca eh %d ", a - b);

    printf ("\n O valor ABSOLUTO da diferenca entre %d e %d eh: %d", a, b, ab);

    system ("pause");


}