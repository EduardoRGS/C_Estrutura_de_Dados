#include <stdio.h>
#include <stdlib.h>

int main () {

    double nota1, nota2, nota3, nota4;
    double media, exame;

    printf("Digite todas as notas do aluno: \n");
    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);
    media = (nota1*2 + nota2*3 + nota3*4 + nota4*1) / 10;

    if(media <= 5){
      printf("Media: %.1lf\n", media);
      printf("Aluno reprovado.");
    }else if(media >= 7){
      printf("Media: %.1lf\n", media);
      printf("Aluno aprovado.");
    }else {
      printf("Aluno em exame.\n");
      scanf("%lf", &exame);
      printf("Nota do exame: %.1lf\n", exame);
      if((media+exame) /2 >= 5){
        printf("Aluno aprovado.\n");
      }else {
        printf("Aluno reprovado.\n");
      }
      printf("Media final: %.1lf\n", (media+exame)/2);
    }
    
    return 0;
}