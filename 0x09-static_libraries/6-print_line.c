#include "main.h"
/**
 * print_line - write a function that draws a straight line in the terminal
 * @n: integer used to draw a line
 * use _putchar to print
 * where n is the number of times _ should be printed
 * the line should end with a \n
 * if n is 0 then the funtion should only print \n
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
