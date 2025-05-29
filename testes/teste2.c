#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese_Brazil.1252");

    char a [100];


    printf ("Escolha um nome\n", a);

    
    fflush (stdin);
    fgets (a, sizeof(a), stdin);

    int i = 0;
    
    while (a[i] != '\0'){
        if (a[i] == '\n') {
            a[i] = '\0';
            break;
        }
        i++;
    }

    printf ("legal, prazer %s\n", a);
    return 0;

}