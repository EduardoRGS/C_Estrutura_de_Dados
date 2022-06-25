/*

IMPORTANTE

"r" :
Ler o arquivo, se o arquivo não existe retorna null.
• "w" :
Escreve o arquivo, se ele não existe ele cria
• "a" :
Adicionando novo conteúdo no final do arquivo, se o arquivo não
existe um novo arquivo é criado

"r+" :
Ler, escrever, modificar o conteúdo do arquivo, se o arquivo
não existe retorna null
• "w+" :
Ler, escrever, modificar o conteúdo do arquivo, se o arquivo
não existe um novo arquivo é criado
• "a+" :
Ler, adicionar novos conteúdos no final do arquivo, não pode
modificar o conteúdo existente. se o arquivo não existe um novo arquivo
é criado

*/

/* Exemplo de como abrir e ler um arquivo */
/*
 #include<stdio.h> // Biblioteca <stdio.h>

 void main()  // função principal que execura o código c
 {
   FILE *fp; // declaração de um ponteiro tipo File (arquivo)
   char ch; // declaração de uma variavel tipo char

   // utilizando a função fopen para abrir o arquivo passando como paramêtro
   // ( "Nome e tipo do arquivo", "r = read (modo de leitura)")
   fp = fopen ("arquivo1.txt", "r" );

   while ( 1 )
   {
     // Para ler o conteúdo do arquivo da memória use uma função chamada fgetc( )
    //   como paramêtro passa-se o paramêtro do tipo arquivo fp
     ch = fgetc(fp);
     if(ch==EOF) // Ler até não tem mais nada a ser lido por isso == EOF
       break;
     printf("%c",ch); // Printa o conteudo do arquivo
   }
   fclose ( fp ); // Fechamento do arquivo, salva todas as operações depois fehcha o arquivo
 }
*/
/* Exemplo de um arquivo que lê e conta a quantidade de caracteres, espaços, tabs e
newlines estão presentes dentro do arquivo */

/*
#include<stdio.h>
main( )
{
  FILE *fp;
  char ch;
  int pqtdecar = 0; // Variavel para contar caracteres, espaços, tabs e newlines
 // utilizando a função fopen para abrir o arquivo passando como paramêtro
 //  ( "Nome e tipo do arquivo", "r = read (modo de leitura)")
  fp = fopen ( "arquivo1.txt", "r" );
  while ( 1 )
  {
    ch = fgetc(fp);
    if(ch==EOF){
      break;
    }
    pqtdecar++; // Contador
    printf("%c",ch);
  }
  fclose ( fp );
  printf("Quantidade de Caracteres: %d",pqtdecar);
  return 0;
}
*/
/* Exemplo copiando os dados de um arquivo para o  outro /*/
/* Receives strings from keyboard and writes them to file */
/*
#include <stdio.h>
main( )
{
  FILE *fOriginal, *fCopia;
  char ch;
  fOriginal = fopen ("arquivo1.txt", "r" );
  if (fOriginal == NULL )
  {
    puts ( "Nao foi possivel abrir o arquivo!!!" ) ;
    exit(0) ;
  }
  fCopia = fopen ("copia_arquivo1.txt", "w" );
  if (fCopia == NULL )
  {
    puts ( "Nao foi possivel gravar o arquivo!!!" ) ;
    exit(0) ;
  }
  while ( 1 )
  {
    ch = fgetc(fOriginal);
    if(ch==EOF)
      break;
    // fputc = Pega o ch que é cada caracter do arquivo original e
    // joga para os dados para outro arquivo
    fputc (ch, fCopia);
  }
  fclose (fOriginal); // importante fechar ambos os arquivos com fclose.
  fclose (fCopia);
  return 0;
}
*/
/* Exemplo escrevendo em um arquivo */
/* Receives strings from keyboard and writes them to file */
/*
#include <stdio.h>
main( )
{
  FILE *fp;
  char s[80]; // vetor de caracteres
  fp = fopen ( "POEM.TXT", "w" );
  if ( fp == NULL )
  {
    puts ( "Cannot open file" );
    system("pause");
    exit(0);
  }
  printf ( "\nEnter a few lines of text:\n" );
  while ( strlen ( gets ( s ) ) > 0 ) // enquanto meu vetor tiver mais de 0 caracteres
  {
    fputs ( s, fp );  // fputs = passa um array com os caracteres digitados e manda para o arquivo
    fputs ( "\n", fp );
  }
  fclose ( fp );
  system("pause");
}
*/

/* Exemplo como funciona o fprintf com struct */
/*
#include<stdio.h>
struct emp // bem parecido com uma classe no java
  {
    char name[40] ;
    int age ;
    float bs ;
  };
main( )
{
  FILE *fp ;
  char another = 'Y' ;
  struct emp e ;
  fp = fopen ( "EMPLOYEE.DAT", "w" ) ; // w = escreve em um arquivo, se ele não existir ele
                                       // cria esse arquivo com o nome passado no parametro
  if ( fp == NULL )
  {
    puts ( "Cannot open file" ) ;
    system("pause");
    exit(0) ;
  }
  while ( another == 'Y' || another == 'y' ) // enquanto digita Y/y depois de informa o nome,idade e salario.
  {
     printf ( "\nEnter name, age and basic salary: " ) ;
     scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ; // lendo os dados da struct
     fprintf ( fp, "%s %d %0.2f\n", e.name, e.age, e.bs ) ; // fprintf = para escreve os valores armazenados nas varivaies para o arquivo
                                                            // veja que o ponteiro do arquivo é passado primeiro
     printf ( "Add another record (Y/N) " ) ;

     // A função fflush descarrega os buffers de saída de um fluxo de dados.
     // Isto é, qualquer dado ainda não escrito no disco e guardado nos buffers temporários de saída, é escrito.
     // Com isso, o buffer é limpo.
     fflush ( stdin ) ;

     // getch() espera que o usuário digite uma tecla e retorna este caractere. Você pode estar estranhando o
     // fato de getch() retornar um inteiro, mas não há problema pois este inteiro é tal que quando igualado a um char a
     // conversão é feita corretamente. A função getche() funciona exatamente como getch(). A diferença é que getche() gera um "echo"
     // na tela antes de retornar a tecla.
     another = getche( ) ;
  }
  fclose ( fp );
}
*/

#include <stdio.h>
struct emp
{
  char name[40] ;
  int age ;
  float bs ;
};
main( )
{
  FILE *fp ;
  struct emp e ;
  fp = fopen ( "EMPLOYEE.DAT", "r" ) ;
  if ( fp == NULL )
  {
    puts ( "Cannot open file" ) ;
    system("pause");
    exit(0) ;
  }
  // fscanf = passa o arquivo e com o & (endereço dos dados das variaveis),
  // ele pega os dados enquanto for diferente do final do arquivo
  while ( fscanf ( fp, "%s %d %f", e.name, &e.age, &e.bs ) != EOF )
     printf ( "%s %d %0.2f\n", e.name, e.age, e.bs ) ; // print os dados adquiridos baseado no & endereço das variaveis
  system("pause");
  fclose ( fp ) ;
}
