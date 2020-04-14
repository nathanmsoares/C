#include <stdio.h>

int main(void) {
  int codigoProduto;
  char nomeProduto[10];
  float valorProduto;
  int produtosARegistrar;
  printf("Quantos produtos deseja registrar?\n");
  scanf("%d", &produtosARegistrar);
  for(int i=0; i < produtosARegistrar; i++){
      FILE *arquivo = fopen("produtos.txt", "a");
      printf("Digite o codigo do Produto\n");
      scanf("%d", &codigoProduto);
      fprintf(arquivo, "%d ", codigoProduto);
      printf("Digite o nome do produto, apenas um nome\n");
      scanf("%s", nomeProduto);
      fprintf(arquivo, "%s ", nomeProduto);
      printf("O nome é %s\n", nomeProduto);
      printf("Digite o valor do produto\n");
      scanf("%f", &valorProduto);
      fprintf(arquivo, "%f\n", valorProduto);
      fclose(arquivo);
  }

      return 0;
}
