#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - write a function that creates an array of integers
 * @min: the first value of an array
 * @max: the last value of an array
 *
 * Return: pointer to newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
