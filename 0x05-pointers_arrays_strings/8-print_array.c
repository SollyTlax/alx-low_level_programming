#include "main.h"
/**
 * print_array - Write a function that prints n elements of an array of
 * integers followed by a new line.
 * @a: void print_array(int *a, int n);
 * @n: numberof elements in an array
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as
 * they are stored in the array
 * You are allowed to use printf
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
