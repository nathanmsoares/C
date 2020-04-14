#include <stdio.h>

int main(void) {
  int codigoProduto;
  char nomeProduto[10];
  float valorProduto;
  FILE *arquivo = fopen("produtos.txt", "r");
  while(feof(arquivo) == 0){
    fscanf(arquivo, "%d %s %f", &codigoProduto, &nomeProduto, &valorProduto);
    printf("codigo produto: %d\nNome do produto: %s\nValor do produto: %f\n", codigoProduto, nomeProduto, valorProduto);
  }
  fclose(arquivo);

      return 0;
}
