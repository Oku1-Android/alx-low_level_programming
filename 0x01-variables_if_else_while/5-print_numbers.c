#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

/*for (n = 0; n < 10; n++)*/
	while(n >= 0 && n < 10)
	{
		printf("%d", n);
		n++;
	}
		printf("\n");
		return (0);
}
