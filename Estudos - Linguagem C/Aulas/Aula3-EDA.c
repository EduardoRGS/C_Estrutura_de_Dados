/******************************************************************************

                            Aula 3 - EDa
                        Funções, parametros e ponteiros

*******************************************************************************/

/**Pesquisar como montar uma biblioteca em C **/
#include <stdio.h>

// Minha função que calcula a media de duas notas passadas como paremetros.
float media(int n1,int n2){
    float m; // variavel que calcula a media
    m = (n1+ n2) / 2; // calculo da media
    return m; // retorno da função tem que ser do mesmo tipo declarado!
    
}

void troca(int *p1, int *p2) // Declaração de função

void main() // função main
{
    int nota1, nota2; // variaveis nota 1 e nota 2.
    float resultado; // varival para armazenar o resultado da media final.
    
    printf("Digite a nota 1: "); // print nota 1
    scanf("%d", &nota1); // valor da nota 1
    
    printf("Digite a nota 2: "); // print nota 2
    scanf("%d", &nota2); // valor da nota 2
    
    resultado = media(nota1, nota2); // chamando a função media e atribuindo o retorno dessa função a uma variavel
    
    printf("Media das notas = %2.f", resultado); // print do resultado final.
    

    //Exemplo Vetores
    int idades [40]; // decleração de um vetor
    float notas [40] [2]; // declaração de um vetor bidimensional
    int i, soma; // declaracao de tipos inteiros

    for(i = 0; i < 40; i++){ // for lendo todas as idades
        scanf("%d", &idades[i]); // valor das idades armazenadas em [i]
        soma += idades[i]; // soma cada idade [i]
    }
    for(i = 39; i >= 0; i--) // for lendo as idades ao contrario
        scanf("%d", &idades[i]); // valor das idades armazenadas em [i]

    printf("Total de todas as idades juntas: %d", soma); // printf da osma das idades
    printf("Media de todas as idades: %d\n", (soma / 40)); // pritf da media das idades

    //Ponteiros
    int var; // declaração de variavel
    int *ptr; // um ponteiro é declarado com o * para falar para compilador que essa varivel é um ponteiro

    var = 10; // armazenando valor 10 na variavel var
    ptr = &var; // buscando o endereço de memoria onde está armazendado o valor da varivel var.
    *ptr = 20; // atribuindo o valor 20 no, ele altera o valor indiretamente da variavel var por causa do local da memoria
    printf("Variavel var: %d, Valor de ptr: %p e Conteudo da variavel prt: %d", var, ptr, *ptr);  // printf valor da variaval var e do ponteiro

    /*
    por valor      = nossa função receberá os valores e
                 manipulá-los não interfere no conteúdo das variáveis originais.

    por referência = temos a referência daquela variável e, dessa forma,
                 alteramos o valor original da variável.
    */

   // Exercicio troca os valores das variaveis ultizando uma função e ponteiros.
    int n1 = 10, n2 = 20; // declaração das variaveis
    
    troca(&n1, &n2);// passando o endereço do valor das varivaeis por meio do & (endereço)
    
    printf("n1 = %d n2 = %d",n1,n2);
    
}

// Com o endereço das variaveis sendo passadas para dois parametros que serão dois ponteiros
// utilizaremos uma variavek auxiliar para trocar os valores dessa variaveis
// utizando aux = *p1, para guardarmos o valor de *p1 na variavel aux.
// *p1 = *p2 alteramos o valor original de *p1 por referencia.
// e com o valor de *p1 guardado no varivel aux passoa esse valor para *p2
// e assim conseguimos trocar os valores das variaveis. 

void troca(int *p1, int *p2){
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}