#include "main.h"
/**
 * _memcpy - writ a function that copies memory area
 * @dest: destination area
 * @src: source area
 * @n: length of buffer
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
