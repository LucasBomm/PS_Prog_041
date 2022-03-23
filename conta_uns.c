//2---
//Dado um número decimal como entrada, crie uma função que retorna o número de
//algarismos "1" contidos na representação binária deste número.

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
