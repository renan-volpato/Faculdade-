#include <stdio.h>

int fibonacci(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int tamanho = 0

  printf("Informe quantos numeros terá a sequencia: ");
  scanf("%d", &tamanho);

  printf("A sequencia com %d números é: \n", tamanho);
  for (int i = 0; i <= tamanho - 1; i++) {
      printf("%d ", fibonacci(i));
  }

  return 0;
}
