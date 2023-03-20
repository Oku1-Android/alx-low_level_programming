#include <string.h>
#include "main.h"

/**
 * _strlen - returning a string length
 * @s: the string variable
 * Return: String lenght
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

