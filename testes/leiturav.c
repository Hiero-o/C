#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale (LC_ALL,"Portuguese.Brazil.1252");

int a = 5;
printf("%d", a);


    printf("Algo de errado não está certo\n");

    system ("pause");
}