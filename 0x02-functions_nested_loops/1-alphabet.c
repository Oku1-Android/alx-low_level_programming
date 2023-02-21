#include "main.h"

/**
 *print_alphabet(void);
 * A code written by Oku Imeh
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
