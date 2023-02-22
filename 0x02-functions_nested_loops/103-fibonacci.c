#include <stdio.h>

/**
 * main - fabonica
 * Return: 0
 */

int main(void)
{
	int i = 0, sum1 = 0, SumTotal = 0, sum2 = 0;

	while (i <= 4000000)
	{
		sum1 = i++;
		sum2 = sum1++;

		SumTotal = sum1 + sum2;

		if (SumTotal % 2 == 0)
			print("%d", SumTotal);
	}
	printf("\n");
}
