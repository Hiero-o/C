#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    int a;
    
    int i = 10;

printf("Digita um numero para contar os numeros inteiros e pares de 10 ate esse numero:");

scanf("%d", &a);


while (i <= a){

    printf("\n %d", i);

    i += 2;
}

return 0;

}