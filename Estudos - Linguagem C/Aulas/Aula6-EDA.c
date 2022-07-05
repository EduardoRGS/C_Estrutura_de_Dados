/*
    Alocação de memória - Estruturas, struct
*/

/*
    struct [tag da esturtura] {
        tipo_da_variavel nome_da_variavel;
        tipo_da_variavel nome_da_variavel;
    } [uma ou mais varivaies da estrutura]

    exemplo 1:

    struct Cliente {
        int id;
        char[30] nome;
    }, c1,c2; // variaveis declaras do tipo Cliente, com os campos de id e nome;

    exemplo 2:

    struct Livros {
        char titulo[50];
        char autor[50];
        char assunto[100];
        int id_livro;
    } livro; // varivavel delcarada do tipo Livro, que tem os campos titulo,autor,assunto,id_livro;

    // Outro modo de delcarar uma variavel tipo struct

    struct Livro livro;
    strcpy (livro.titulo, "Titulo"); /inicializando valores para cada variavel separada


*/

#include <stdio.h>

struct Livro{
    char titulo[50];
    char autor[50];
    char assunto[100];
    int id_livro;
}livro;

void main() {

    struct Livro livro2;

    scanf("%s", livro2.titulo);
    printf("%s\n", livro2.titulo);

    scanf("%s", livro.titulo);
    printf("%s", livro.titulo);
}

