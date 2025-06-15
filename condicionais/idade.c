#include <stdio.h>
#include <stdlib.h>

int main () {

    int i;

    printf("Digite sua idade:\n");
    scanf("%d",&i);

    if (i <=17){
        printf("\n Menor de idade não pode se alistar no exercito, volte futuramente");
    } else if(i == 18) {
        printf("\nVenha capinar lote e pintar meio fio com a gente, aliste-se no exercito militar brasileiro!!");
    } else {
        printf("\nO seu periodo de se alistar ao exercito ultrapassou a data limite, você esta sujeito aos recursos impostos em lei. Compareça a uma junta militar para regularizar sua situacao.");
    } 

    system("pause");

    return 0;



}