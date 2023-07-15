#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -The output of the program should be:
 * The string Last digit of, followed by n, followed by
 * the string is, followed by
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0:
 *  the string and is less than 6 nd not 0
 *
 *  Return: 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (i > 5)
		printf("Last digit of %d and is greater than 5\n", n, i);
	else if (i < 6 && i != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	else
		printf("Last digit of %d is %d and is 0\n", n, i);
	return (0);
}
