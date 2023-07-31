#include "main.h"
#include <stdlib.h>
/**
 * set_string - write a function that sets a value of a pointer to a char
 * @s: input string
 * @to: input
 */
void set_string(char **s, char *to)
{
	free(*s);
	if (to != NULL)
	{
	size_t len = 0;

	while (to[len] != '\0')
	{
	len++;
	}
	*s = (char *)malloc((len + 1) * sizeof(char));
	for (size_t i = 0; i <= len; i++)
	{
	(*s)[i] = to[i];
	}
	else
	{
	*s = NULL;
	}
	}
}
