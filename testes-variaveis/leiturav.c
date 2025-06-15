#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL,"Portuguese.Brazil.1252");

int a = 5;

int b = 78;

int c;


printf("%d", a);


    printf("\n Algo de errado não está certo\n");

    printf ("Valor da variavel a = %d, %d, \n",a,b);

    a = a + b;

    printf("O valor de a, agora eh igual a %d, \n", a);

    printf("escreva um valor inteiro:\n");
    scanf("%d", &c);
    printf("O valor dos numeros eh: %d %d %d \n", a, b, c);

    system ("pause");

    return 0;
}