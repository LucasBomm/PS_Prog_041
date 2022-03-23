//2---
//Crie uma função que receba um número como argumento e retorne "Cross","Bots" ou
//"CrossBots"
//- Se o numero for múltiplo de 3 retorna 'Cross'
//- Se o numero for múltiplo de 5 retorna 'Bots '
//- Se o numero for múltiplo de 3 e 5 retorna 'CrossBots'
//- Se o numero não for múltiplo de 3 nem de 5 deve retornar o número em si

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char *CrossBots(int n) {
    if ((n % 3 == 0) && (n % 5 == 0))
        return("CrossBots");
    if (n % 3 == 0)
        return("Cross");
    if (n % 5 == 0)
        return("Bots");

    return(n);
}




int main() {
    int n = 4;

    printf("%s", CrossBots(n));

	return 0;
}
