//1---
//Crie uma fun��o que receba um �ngulo em radianos e retorne o �ngulo correspondente
//em graus arredondado de uma casa decimal.

#include <stdio.h>
#include <math.h>

float radianos_graus(int radianos) {
    float graus;

    graus = (radianos*180) / 3.141592;

    return(graus);
}

//int main() {
//    printf("%.1f", radianos_graus(50));
//    return 0;
//}
