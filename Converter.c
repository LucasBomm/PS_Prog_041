//2---
//Crie uma função que receba um valor de horas e retorne uma lista com meses(30
//dias),semanas, minutos , segundos e milisegundos.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *Converter(int horas) {
    static int resposta[5]; //preicsa ser static para o valor ser mantido nas chamadas da função

    resposta[0] = horas/720;
    resposta[1] = horas/168;
    resposta[2] = horas*60;
    resposta[3] = horas*3600;
    resposta[4] = horas*3600000;

	return(resposta);
}

//int main() {
//    int *respostas;
//    int i;
//
//    respostas = Converter(2);
//
//    for (i=0; i<5; i++)
//        printf("%d\n", *(respostas+i));
//
//    return 0;
//}
