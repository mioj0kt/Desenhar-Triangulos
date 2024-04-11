#include <stdio.h>

int main() {
  int tamanho, linha, coluna;
  char opt;
  printf("opção (c) para cheio (v) para vazio :");
  scanf("%c%*c", &opt);
  printf("\ntamanho da altura:");
  scanf("%d%*c", &tamanho);
  printf("\n");
  // cheio
  switch (opt) {
  case 'c':
    for (linha = 1; linha <= tamanho; linha++) {
      for (coluna = 1; coluna <= tamanho * 2 - 1; coluna++) {
        if (coluna >= tamanho - (linha - 1) &&
            coluna <= tamanho + (linha - 1)) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
    // vazio
  case 'v':
    for (linha = 1; linha <= tamanho; linha++) {
      for (coluna = 1; coluna <= tamanho * 2 - 1; coluna++) {
        if (coluna == tamanho - (linha - 1) ||
            coluna == tamanho + (linha - 1) || linha == tamanho) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  default:
    printf("\nerro");
    break;
  }
  return 0;
}