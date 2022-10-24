#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *arq;
  char Linha[100];
  char *result;

  arq = fopen("arquivo.txt", "rt");
  if (arq == NULL) {
    printf("Problemas na abertura do arquivo\n");
  }

  int i, tam, diferentes = 0, c = 0, iguais = 0, maior = 0;
  while (!feof(arq)) {

    result =
        fgets(Linha, 100, arq); // o 'fgets' lê até 99 caracteres ou até o '\n'

    // printf("Digite uma palavra: ");
    // scanf("%s", palavra);

    tam = strlen(result);
    tam--;
    i = 0;

    while (tam >= i) {
      if (result[i] != result[tam])
        diferentes++;
      else if (result[i] == result[tam])
        iguais++;
      i++;
      tam--;
      if (maior == 0) {
        maior = iguais;
      } else if (maior < iguais) {
        maior = iguais;
      }
    }

    c++;
  }
  fclose(arq);
  printf("Maior palindromo: %i", iguais);

  return 0;
}