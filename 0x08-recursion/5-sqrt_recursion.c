#include "main.h"
/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - write a function that returns a natural square
 * root of a number
 * @n: input number
 *
 * Return: 1 natural number
 *	-1 non natural number
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
