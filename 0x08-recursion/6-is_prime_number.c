#include "main.h"
/**
 * prime2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: counter from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}

/**
 * is_prime_number - write a function that returns 1 if input
 * integer is prime and 0 if it is not
 * @n: input integer
 *
 * Return: 1 for success
 *	0 for failed
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
