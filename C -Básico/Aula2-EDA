/******************************************************************************
                            Aula 2 - EDA
*******************************************************************************/


#include <stdio.h> // biblioteca sdtio.h 

int main()
{
    int n,m,x,a; // declaração de variaveis
    
    n = 10; // atribuuindo valor 10 para a variavel n;
    m = ++n; // incrementando valor patra a variavel m;
    printf("\n N = %d, M = %d", n, m); // printando o valor das variaveis 
    
    a = 10; // atribuindo valor para a vairavel a;
    x = a++; // incrementando valor pafra a variavel x;
    
    printf("\n A = %d, X = %d", a, x); // printando o valor das variaveis
    
    // variaveis contidionais if/else e switch
    
    if( n == m ){ // condição igual (==), diferente (!=), maior (>=) e menor (<=); 
        printf("\nSão iguais"); // se verdadeiro condição verdadeira entra aqui;
    }else {
        printf("\nValores de N e M não são iguais!"); // Se a condição for falsa;
    }
    
    int i; // declaração da variavel
    printf("\nDigite a sua idade: " ); // print da idade
    //scanf("%d", &i); // lendo o valor da vairavel digitada
    
    if(i > 70) { // condição
        printf("\nVelho!"); // se verdadeira
    }else{ // se false entra em outra condição
        if(i > 21) // condição
            printf("\nAdulto!"); // se verdadeira
        else // se condição falsa
            printf("\nJovem!"); // se falsa
    }
    
    // Com if ternário
    // antes do ? vem a condição
    // ? que diser se a condição for verdadeiro
    // : quer dizer se a condição for false
    i > 70 ? printf("\nVelho!") : i > 21 ? printf("\nAdulto!") : printf("\nJovem!");

    // switch
    char sabor;
    
    printf("\nDigite um dos 3 sabores de sorvete");
    printf("\nC para chocolate, M para morango e L para limão: ");
    //scanf("%c", &sabor); // lendo o valor digitado
    
    switch(sabor){ // valor da variavel
        case 'c': // caso o valor da variavel seja == c;
            printf("\nVocê escolheu o sabor de Chocolate"); // print do sabor escolhido
            break; // para sair da condição so switch, porque se não ele executa
                    // todos os tipo de casos
        case 'm': // caso o valor da variavel seja == m;
            printf("\nVocê escolheu o sabor de Morango");
            break; // para sair da condição so switch, porque se não ele executa
                    // todos os tipo de casos
        case 'l': // caso o valor da variavel seja == l;
            printf("\nVocê escolheu o sabor de Limão");
            break; // para sair da condição so switch, porque se não ele executa
                    // todos os tipo de casos
        default: // caso ele não entre em nehum dos casos acima
            printf("\nVocê escolheu um sabor não disponivel"); // msg para o usuario
    }
    
    // estruturas de repetição
    // for
    // int i;
    // for (i = calor inicial; condição; incremento i){
      // bloco de comando (i);  
    //}
    
    int cont;
    
    for(cont = 0; cont <= 10; cont+=2) // contador para números pares
        printf("\n Valor da variavel cont: %d", cont);
    
    
    // while
    // while (condição){
        // bloco de comandos;
    //}
    // uso do for quando não souber quantas vezes o loop vai rodar.
    char letra = a;
    
    while(letra != 'b'){
        printf("\n Digite uma letra: ");
        scanf("%c\n", &letra);
        printf("\n %c = %d", letra, letra);
        
    }
    
    // do while
    // do {
        // comandos;
    //} while(condição);
    
    do {
          printf("\n Digite uma letra: ");
        scanf("%c\n", &letra);
        printf("\n %c = %d", letra, letra);
    }while(letra != 'b');
    
    
    return 0;
}
