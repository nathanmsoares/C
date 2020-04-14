#include <stdio.h>

int main(void) {
  for(int k = 0; k < 2; k++){
      int x;
      printf("Digite o número de alunos da turma %d\n", k + 1);
      scanf("%d", &x);
      float notas[x];
      int i;
      float media;
      for(i = 0; i < x; i++){
        printf("Digite a nota do aluno %d\n", i + 1);
        scanf("%f", &notas[i]);
        printf("\nValor da nota: %f\n\n", notas[i]);
        float soma = 0;
        if( i == x - 1){
          for(int j = 0; j < x; j++){
            soma = soma + notas[j];
            if( j == x - 1 ){
              media = soma / x;
              printf("A média é igual a %f\n\n", media);
              }
            }
        }
      }
  }
      return 0;
}
