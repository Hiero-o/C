#include <stdio.h>
#include <stdlib.h>


int main () {

    int a = 5, b = 3;

printf("A soma de a e b eh: %d \n", a + b);


int c, d;

printf("Escolha o valor de A:");
scanf("%d", &c);

printf ("Escolha, agora, o de B:");
scanf("%d", &d);

printf("\nA soma entre as variaveis a = %d e a Var b = %d eh igual a %d \n", c, d, c + d);

printf("\nA subtracao entre as variaveis a = %d e a Var b = %d eh igual a %d \n", c, d, c - d);

printf("\nA divisao entre as variaveis a = %d e a Var b = %d eh igual a %d \n", c, d, c / d);

printf("\nA multiplicacao entre as variaveis a = %d e a Var b = %d eh igual a %d \n", c, d, c * d);

printf("\nO resto da divisao entre as variaveis a = %d e a Var b = %d eh igual a %d \n", c, d, c % d);

printf("\nO valor absoluto o numero -3 eh: %d \n", abs(-3) );






system ("pause");

return 0;

}
