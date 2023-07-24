#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: Prototype: int _strlen(char *s);
 *
 * Return: @s length
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
