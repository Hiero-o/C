#include <stdio.h>
#include <stdlib.h>

int main () {

    char p1 [] = "boi";
    char p2 [5] = "bala";
    char p3 [] = {'a','b','c','d','e','\0'};
    char p4 [5] = {'f','o','n','e','\0'};

    printf("%s\n",p1);

    printf("\nDigite uma palavra com ate 4 letras\n");
    fflush(stdin);
    scanf("%s", p2);

    //////////////////////////////////////////////////////////////

    char VetorChar[255];

    fflush(stdin);

    printf("\nDigite uma palavra:\n");
    fgets(VetorChar, sizeof(VetorChar), stdin);

    printf("Palavra recebida:");
    puts(VetorChar);
    

return 0;

}