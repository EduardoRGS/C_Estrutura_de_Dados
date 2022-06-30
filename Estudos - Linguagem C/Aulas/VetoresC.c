#ifndef Vatores
#define VetorecC

#include <stdlib.h>

 /*1. Crie uma biblioteca em linguagem C chamada VetoresC.c com as seguintes funções/procedimentos:
        a. Função CriaVetInt para alocação de vetores do tipo int. Esta função deverá receber a quantidade de
        elementos do vetor e retornar o ponteiro para o vetor alocado;
        b. Função CriaVetFloat para alocação de vetores do tipo float. Esta função deverá receber a quantidade
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
