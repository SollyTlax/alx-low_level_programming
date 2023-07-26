#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: string to be added on
 * @src: string used to append
 * Prototype: char *_strcat(char *dest, char *src);
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;

	while (*(src + lengthS) != '\0' && lengthD < 97)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;
	}
	*(dest + lengthD) = '\0';
	return (dest);
}
