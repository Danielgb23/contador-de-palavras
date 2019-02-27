/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;
  int words=1;

  c = 1;

  while (c != '\n') {
    scanf("%c", &c);
    if( c == ' ' || c == ',' || c == '.' || c == '!' || c == ';'){
	while ( c == ' ' || c == ',' || c == '.' || c == '!' || c == ';')
		scanf("%c", &c);
	if (c == '\n')
		break;
	words++;
}

	

  }

  printf("%d\n", words);
  return 0;
}
