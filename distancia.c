//1--
//Escreva uma função que receba as coordenadas de dois pontos em um plano cartesiano
//e retorne o comprimento do segmento de reta entre esses dois pontos.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancia(int* p1, int* p2) {
    float d;

    d = sqrt(pow((p1[0]-p2[0]), 2) + pow((p1[1]-p2[1]), 2));

    return(d);
}




//int main() {
//    int p1[2]={0, 0}, p2[2]={1, 1};
//
//    printf("%.2f", distancia(p1, p2));
//
//	return 0;
//}
