#include <stdio.h>
#include <stdlib.h>
/**
 * main -Write a program that prints all possible different
 * combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different 012, 120, 102, 021, 201, 210
 * are considered the same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 8; num1++)
	{
	for (num2 = num1 + 1; num2 < 9; num2++)
	{
	for (num3 = num2 + 1; num3 < 10; num3++)
	{
	putchar(num1 + '0');
	putchar(num2 + '0');
	putchar(num3 + '0');
	if (num1 == 7 && num2 == 8 && num3 == 9)
		continue;

		putchar(',');
		putchar(' ');
	}

	}

	}
	putchar('\n');
	return (0);
}
