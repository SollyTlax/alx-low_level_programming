#include <stdio.h>
#include <stdlib.h>
/**
 * main -Write a program that prints all single digit numbers
 * of base 10 starting from 0
 * You are not allowed to use any variable of type char
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	putchar(n + '0');
	}
	putchar('\n');
	return (0);

}
