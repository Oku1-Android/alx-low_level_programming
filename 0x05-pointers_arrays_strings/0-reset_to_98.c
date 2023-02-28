#include <stdio.h>
#include "main.h"
/**
 *reset_to_98 - reeting a pointer
 *@n: character to reset
 *Return: 0
 */

void reset_to_98(int *n)
{
	int b;

	n = &b;
	n = 98;
	_putchar('0' + n);

	return (0);
}
