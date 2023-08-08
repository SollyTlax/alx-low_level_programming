#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Write a function that concatenates all the arguments of your
 * program.
 * @ac: lenght of string
 * @av: input string
 * Return: NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	size_t total_len = 0;

	for (int i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
		total_len++;
		j++;
		}
		total_len++;
	}
	char *result = malloc(total_len + 1);

	if (result == NULL)
	return (NULL);

	int pos = 0;

	for (int i = 0; i  < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
		result[pos++] = av[i][j++];
		}
		result[pos] = '\0';

	}
	return (result);
}
