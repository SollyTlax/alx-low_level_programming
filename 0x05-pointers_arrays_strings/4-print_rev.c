#include "main.h"
/**
 * print_rev - prints astring in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
	putchar(s[i]);
	}
	putchar('\n');
}
