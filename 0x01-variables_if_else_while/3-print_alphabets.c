#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints the alphabet in lowercase
 * and then in uppercase, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha)
	}
		putchar('\n')
	return (0);
}
