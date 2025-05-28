#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main () {
    //permite usar acentos//
    setlocale(LC_ALL, "");

    int a;
   

    float b = 5.5348;

    char n = 't';
   
    printf("Escolha um valor ç ã ó\n");
    scanf ("%d", &a);
    printf("o valor de a é %d\n", a);
    

    printf("O valor de %f se tornou: \n", b);
    scanf("%f", &b);
    printf("O valor de c agora é: %f \n", b);

    printf("Me fale seu nome agora\n", n);
    fflush(stdin);
    scanf("%c", &n);
    printf ("Olá, %c tudo bem?\n", n);


}

  