#include "main.h"
/**
 * _print_rev_recursion - write a function that print string in reverse
 * @s: input string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
