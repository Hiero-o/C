#include <stdio.h>
#include <stdlib.h>


int main() {

    int n1, n2, tot;

    printf ("digite dois numeros seguidos\n");
    scanf("%d %d", &n1, &n2);

    tot = n1 + n2;

    if (tot >= 10){
        printf("A soma dos numeros eh maior que 10!");
    } else {
        printf ("A soma dos numeros eh menor que 10.");
    }

    system("pause");
    return 0;
}