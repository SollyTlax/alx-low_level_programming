#include <stdio.h>
#include <stdlib.h>
/**
 * main -Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Print all the letters except q and e
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
	}
		putchar('\n');
	return (0);
}
