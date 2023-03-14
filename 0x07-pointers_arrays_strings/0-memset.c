#include "main"

/**
 * _memset - the memory set
 * @s: the memory area
 * @n: the number of bytes
 * @b: the bytes to fill the memory
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i = n; i++)
	{
		s[i] = b;
	}

	return (s);
}
