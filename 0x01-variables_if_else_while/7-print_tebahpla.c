#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 * You can only use the putchar function
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

		for (alpha = 'z'; alpha >= 'a'; alpha--)
		{
			putchar(alpha);
		}
			putchar('\n');
		return (0);
}
