#ifndef Vatores
#define VetorecC

#include <stdlib.h>

 /*1. Crie uma biblioteca em linguagem C chamada VetoresC.c com as seguintes fun��es/procedimentos:
        a. Fun��o CriaVetInt para aloca��o de vetores do tipo int. Esta fun��o dever� receber a quantidade de
        elementos do vetor e retornar o ponteiro para o vetor alocado;
        b. Fun��o CriaVetFloat para aloca��o de vetores do tipo float. Esta fun��o dever� receber a quantidade
        de elementos do vetor e retornar o ponteiro para o vetor alocado; */

CriaVetInt int (int* qtdElementos){
    int *ponteiro;

    pontiero = malloc(qtdElementos*sizeof(int));

    return ponteiro;
}

CriaVetfloat float (float* qtdElementos) {
    float *ponteiro;

    ponteiro = malloc(qtdElementos*sizeof(float));

    return ponteiro;

}

#endif
