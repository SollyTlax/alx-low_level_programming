#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the numbers from 1 to 100
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Each number or word should be separated by a space
 * You are allowed to use the standard library
 *
 * Return: 0
 */
int main(void)
	{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
