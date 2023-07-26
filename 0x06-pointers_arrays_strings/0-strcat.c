#include "main.h"
/**
 * strcat - Write a function that concatenates two strings.
 * @dest: string to be added on
 * @src: string used to append
 * Prototype: char *_strcat(char *dest, char *src);
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 *
 * Return: dest
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
