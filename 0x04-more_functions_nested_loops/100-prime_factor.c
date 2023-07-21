#include <stdio.h>
#include <stdlib.h>
/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime = 612852475143, div = 3;

	while (div <= (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		if ((prime % div) == 0)
			prime /= div;
		else
			div += 2;
	}

	printf("%ld\n", prime);

	return (0);
}
