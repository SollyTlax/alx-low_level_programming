#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * output 0123456789abcdef
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
	putchar(n + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
