#include <stdio.h>
#include <unistd.h>
/**
 * main - program that prints exactly 1 line and a new line
 *
 * Description: You are not allowed to use any functions
 * listed in the NAME section of the man (3) printf or man
 * (3) puts Your program should return 1
 * Your program should compile without any warnings
 * when using the -Wall gcc option
 *
 * Return: 1 (Success)
 */
int main(void)
{
	fputs("and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
