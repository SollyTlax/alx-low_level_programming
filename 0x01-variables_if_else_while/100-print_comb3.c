#include <stdio.h>
#include <stdlib.h>
/**
 * main -Write a program that prints all possible different
 * combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;

		for (num1 = 0; num1 <= 9; num1++)
		{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
		putchar(num1 + '0');
		putchar(num2 + '0');
		if (num1 < 8 && num2 < 9)
		putchar(',');
		putchar(' ');
		}

		}
		putchar('\n');
		return (0);
}
