#include "main.h"
/**
 * _pow_recursion - write a function that returna value of x raised to the
 * power of y
 * @x: base number
 * @y: power number
 *
 * Return: 1 positive
 *	-1 y lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
