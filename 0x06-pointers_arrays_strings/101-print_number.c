#include "main.h"
/**
 * print_number - write a function that prints an integer.
 * You are only allowed to use _putchar to print
 * You are not allowed to use long
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
