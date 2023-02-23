#include <stdio.h>

/**
 * main - fabonica
 * Return: 0
 */

int main(SumTotal)
{
	int i = 1, sum1 = 0, sum2 = 0;

	while (i <= 4000000)
	{
		printf("%d", i + sum1);
		sum1 = i++;
		sum2 = sum1++;

		SumTotal = sum1 + sum2;

		if (SumTotal % 2 == 0)
			printf("%d", SumTotal);
	}
	printf("\n");

	return (0);
}
