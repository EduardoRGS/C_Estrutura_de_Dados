/*
// Exemplo - C: malloc, calloc, free
#include <stdio.h>
#include <stdlib.h> // Biblioteca de: malloc, calloc, free
int main ()
{
int *Vet1, *Vet2; //Declara��o dos ponteiros
Vet1 = (int*) malloc (100*sizeof(int)); //Aloca��o de mem�ria
Vet2 = (int*) calloc (100, sizeof(int)); //Aloca��o de mem�ria
free (Vet1); //Desaloca��o de mem�ria
free (Vet2); //Desaloca��o de mem�ria
return 0;
} */

#include <stdio.h>
#include <stdlib.h>
#include "myLibrary.c"

int main(){

    int* vetor;
    int qtdElemtentos;

    vetor = CriaVetInt(qtdElemtentos);

    return 0;
}

