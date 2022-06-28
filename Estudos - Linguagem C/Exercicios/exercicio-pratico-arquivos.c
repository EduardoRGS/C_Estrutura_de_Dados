#include<stdio.h>

int word2vec(char *pNomeTxtEntrada){

    char ch;
    char texto[250], arquivo[30];
    int palavras = 0, letras = 0;

    pNomeTxtEntrada = fopen("Texto.txt", "r");
    if(pNomeTxtEntrada == NULL){
        puts ( "Nao foi possivel abrir o arquivo!!!" ) ;
        exit(0) ;
    }

    while ( (ch = fgetc(pNomeTxtEntrada)) != EOF )
   {
     letras++;


     if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0'){
        palavras++;
        //texto[palavras] = ch;
     }
   }
   printf("Letras no text: %d\n", letras);
   printf("Palavras no texto: %d\n", palavras);
   printf("Palavra: %s\n", texto);
   fclose ( pNomeTxtEntrada );
}

void main() {

    char arquivo[30];

    printf("Digite o nome do arquivo.txt que deseja abrir: ");
    scanf("%s", arquivo);

    word2vec(arquivo);
}
