//2---
//Dado um n�mero decimal como entrada, crie uma fun��o que retorna o n�mero de
//algarismos "1" contidos na representa��o bin�ria deste n�mero.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int conta_uns(int n) {
    int uns=0 , resto;

    while (n!=0) {
    resto = n % 2;
    if (resto == 1)
        uns++;
    n /= 2;
    }

    return (uns);
}


//int main() {
//    int n = 999;
//
//    printf("%d", conta_uns(n));
//
//	return 0;
//}
