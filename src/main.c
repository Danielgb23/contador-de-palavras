/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

	char c;
	int words=0;

	c = 1;

	while (c != '\n') {
		scanf("%c", &c);

		if ( c > 64 && c < 91 || c > 96 && c < 123 ){
			while ( c > 64 && c < 91 || c > 96 && c < 123 )
				scanf("%c", &c);
			words++;
		}
		else if ( c > 47 && c < 58 ){
			while ( c > 47 && c < 58 )
				scanf("%c", &c);
			if( c == '.' || c == ','  )	{
				scanf("%c", &c);
				while ( c > 47 && c < 58 )
					scanf("%c", &c);
			}
			words++;

		}	
	}





	printf("%d\n", words);
	return 0;
}
