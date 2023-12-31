#include "main.h"
/**
 * _strcpy - Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: buffer to copy
 * @src: source of string to copy
 *
 * Return: the pointer to @desti
 */
char *_strcpy(char *dest, const char *src)
{
	char *orDest = dest;

	if (dest == NULL || src == NULL)
	{
	printf("Error: Invalid pointers.\n");
	return (NULL);
	}

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	dest = ('\0');
	return (orDest);
}
