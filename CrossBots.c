//2---
//Crie uma fun��o que receba um n�mero como argumento e retorne "Cross","Bots" ou
//"CrossBots"
//- Se o numero for m�ltiplo de 3 retorna 'Cross'
//- Se o numero for m�ltiplo de 5 retorna 'Bots '
//- Se o numero for m�ltiplo de 3 e 5 retorna 'CrossBots'
//- Se o numero n�o for m�ltiplo de 3 nem de 5 deve retornar o n�mero em si

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
