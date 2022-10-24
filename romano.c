#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// I = 1, V = 5 , X = 10, L = 50, C = 100, D = 500, M = 1000
int main(void) {
  char rom[50];
  int a[50], len, num = 0, total = 0;

  printf("Digite um numero romano: ");
  scanf("%s", rom);
  len = strlen(rom);
  for (int i = 0; i < len; i++) {
    switch (rom[i]) {
    case 'I':
      a[i] = 1;

      break;

    case 'V':
      a[i] = 5;

      break;

    case 'X':
      a[i] = 10;

      break;

    case 'L':
      a[i] = 50;

      break;

    case 'C':
      a[i] = 100;

      break;

    case 'D':
      a[i] = 500;

      break;

    case 'M':
      a[i] = 1000;

      break;

    default:
      printf("Valor invalido!\n");
    }
  }
  total = a[len - 1];
  for (int i = len - 1; i > 0; i--) {
    if (a[i] > a[i - 1]) {
      total = total - a[i - 1];
    } else if (a[i] == a[i - 1] || a[i] < a[i - 1]) {
      total = total + a[i - 1];
    }
  }

  printf("Numero convertido: %i", total);
  return 0;
}