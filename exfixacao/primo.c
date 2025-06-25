#include <stdio.h>
#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL,"");

    int p;
    int r;
    int i;

    printf("\ndIGITA UM NUMERO PARA SABER SE ELE É PRIMO OU NAO:");

    scanf("%d", &p);


    for(i =2; i < p; i++) {
        
        if(p % i == 0) {
            
            r++;
            break;
        } 
        
    }

    if(r == 0){
        printf("\n%d eh um numero primo", p);
    } else {
        printf("\n%d nao eh um numero primo", p);
    }

  
return 0;

}