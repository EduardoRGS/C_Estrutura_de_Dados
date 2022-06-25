/******************************************************************************

                            Aula 4 - EDa
                        Arquivos, manipulação de arquivos

*******************************************************************************/

// Cóidog exemplo do slide 

// #include<stdio.h>
// main( )
// {
//   FILE *fp; // Criacção de um ponteiro tipo File
//   char ch; // declaração de uma varieavel tipo char
//   fp = fopen ("C:/Documents/arquivo1.c", "r" ); // fopen = file open para abrir um aquivo e r = read ler aquivo
//   while ( 1 )
//   {
//     ch = fgetc(fp); // • Para ler o conteúdo do arquivo da memória use
//                     //uma função chamada fgetc( )
//     if(ch==EOF)
//       break;
//     printf("%c",ch);
//   }
//   fclose ( fp );
//   return 0;
// }
/* Receives strings from keyboard and writes them to file */
#include <stdio.h>
main( )
{
  FILE *fOriginal, *fCopia;
  char ch;
  fOriginal = fopen ("Arquivo1.txt", "r" );
  if (fOriginal == NULL )
  {
    puts ( "Nao foi possivel abrir o arquivo!!!" ) ;
    exit(0) ;
  }
  fCopia = fopen ("Copia_Arquivo1.txt", "w" );
  if (fCopia == NULL )
  {
    puts ( "Nao foi possivel gravar o arquivo!!!" ) ;
  }
  while ( 1 )
  {
    ch = fgetc(fOriginal);
    if(ch==EOF)
      break;
    fputc (ch, fCopia);
  }
  fclose (fOriginal);
  fclose (fCopia);
  return 0;
}
