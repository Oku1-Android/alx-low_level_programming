I#include <stdio.h>

/**
 * main - fabonica
 * Return: 0
 */

int main(void)
{
	int i = 1, j = 2, SumTotal = 0

	while (i <= 4000000)
	{
		i = j;
		j = SumTotal;

		SumTotal = i + j;

		if (SumTotal % 2 == 0)
			printf("%d", SumTotal);
	}
	printf("\n");

	return (0);
}
