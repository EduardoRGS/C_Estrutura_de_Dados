// Estrutura básica C
// 

#include <stdio.h>// Biblioteca para usar funçoes de entrada e saida (I/O)
#include <stdlib.h> // Biblioteca de funções de uso genérico
// Não é necessario incluir essas bibliotecas base, por conta do proprio vc code incluir elas ao executar o codigo.

// Estudar cada função dessas bilbiotecas
// •	 stdio.h ->Funções de entrada e saída (I/O) - Prioridade l
// •	 string.h ->Funções de tratamento de strings - Prioridade l
// •	 math.h ->Funções matemáticas - ll
// •	 ctype.h ->Funções de teste e tratamento de caracteres - ll
// •	 stdlib.h ->Funções de uso genérico - lll

// Código Significado
// \b Retrocesso (BackSpace)
// \f Salto de Página (Form Feed)
// \n Linha Nova (Line Feed)
// \t Tabulação Horizontal (TAB)
// \x Representação de byte na base hexadecimal (Número da tecla da tabela acsi)

// Leitura e apresentação de variaveis
// %c - leitura de caracter;
// %d - leitura de números inteiros;
// %f - leitura de números reais;
// %s - leitura de caracteres

// Tabela de tamanhos e escala de tipos básicos
// Tipo Extensão Escala Numérica em bits
// Char 8 0 a 255 por isso um varchar pode ter apenas 255 caracteres.
// Int 16 -32768 a 32767
// Float 32 3.4E-38 a 3.4E+38
// Double 64 1.7E-308 a 1.7E+308
// Void 0 Sem valor

void main() {

    int num = 10; //Declaração de uma váriavel tipo inteira, atribuindo valor 10 a esta variavel inteiro ex: 1,2,3...
    float numQuebrado = 25.1;  // Declaração de uma variavel com número quebrado ex: 3.99
    char nome[30]; // Declaração de um array com 30 caracteres a serm digitados.


    printf("Valor da variavel num: %d\n", num); //Para imprimir o valor da vairavel inteiras %d, %f se for float %lf se for double.
    printf("Valor da variavel numQuenrado: %0.2f\n", numQuebrado); //Para imprimir o valor de variavel tipo float %f
    printf("Digite o valor a ser atribuido a variavel num: "); 
    scanf("%d", &num); // O & busca o endereço onde foi armazenado na memoria do computador a varivavel num e aramzenda o valor
    // digitado dentro dela. num = "numero inteiro digitado"
    printf("Valor da variavel num: %d\n", num); // Imprimindo o novo valor atribuido a este variavel
    printf("O %d elevado ao quadrado resulta em %d. \n", num,num*num);
    printf("Seu nome: \n");
    scanf("%s", nome); // %s porque o char foi delcarado como um vetor, se ele é declarado como vetor vira um tipo string.
    // Não é necessario ultilizar o & porque o nome do vetor já é um ponteiro e ele já tem um endereço de memoria.
    printf("Seu nome eh: %s", nome);
    getch(); // getch()  é tipo em envento que capta cada vez que o usuario digita

    

}