#include "main.h"
/**
 * factorial - write a function that returns a factorial of a given number
 * @n: input number
 *
 * Return: 0 for success
 *		-1 for error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
