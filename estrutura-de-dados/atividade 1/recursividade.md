#include <stdio.h>

int potencia(int x, int y){
  if(y == 0) {
    return 1;
  } else {
    return potencia(x, y - 1) * x;
  }
}

int main () {
  int base = 0, expoente = 0;

  printf("digite a base: ");
  scanf("%d", &base);
  printf("digite o expoente: ");
  scanf("%d", &expoente);

  printf("%d", potencia(base, expoente));

  return 0;
}
