#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - Write a function that prints an integer.
 * @n:  void print_number(int n);
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 */
void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}

	if (n / 10 != 0)
	{
	print_number(n / 10);
	}

	_putchar('0' + (n % 10));
}
